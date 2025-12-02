#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<vector<int>> rows(N);

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        rows[i].resize(M);
        for (int j = 0; j < M; j++) cin >> rows[i][j];
    }

    sort(rows.begin(), rows.end(), [](const vector<int>& A, const vector<int>& B) {
        long long sumA = 0, sumB = 0;
        for (int x : A) sumA += x;
        for (int x : B) sumB += x;
        if (sumA != sumB) return sumA < sumB;
        if (A.size() != B.size()) return A.size() < B.size();
        return A < B;
    });

    for (auto &row : rows) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
}