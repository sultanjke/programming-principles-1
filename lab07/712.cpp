#include <iostream>
#include <map>
#include <vector>
using namespace std;

int countPairs(const vector<int>& a, const vector<int>& b, int n) {
    map<int,int> cntA, cntB;

    for (int x : a) cntA[x]++;
    for (int x : b) cntB[x]++;

    int pairs = 0;
    for (auto &p : cntA) {
        int value = p.first;
        pairs += min(cntA[value], cntB[value]);
    }

    return pairs;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    cout << countPairs(a, b, n);

    return 0;
}