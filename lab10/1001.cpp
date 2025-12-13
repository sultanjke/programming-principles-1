#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long getSum(const vector<int>& v) {
    long long s = 0;
    for (int x : v) s += x;
    return s;
}

bool cmp(const vector<int>& a, const vector<int>& b) {
    long long sumA = getSum(a);
    long long sumB = getSum(b);

    if (sumA != sumB) return sumA < sumB;
    if (a.size() != b.size()) return a.size() < b.size();

    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] != b[i]) return a[i] < b[i];
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> rows;
    rows.reserve(N);

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        vector<int> row(M);
        for (int j = 0; j < M; j++) cin >> row[j];
        rows.push_back(row);
    }

    sort(rows.begin(), rows.end(), cmp);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < (int)rows[i].size(); j++) {
            if (j) cout << ' ';
            cout << rows[i][j];
        }
        cout << '\n';
    }

    return 0;
}
