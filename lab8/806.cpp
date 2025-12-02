#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    map<int, int> freq;
    for (int x : v) freq[x]++;

    int bestVal = -1;
    int bestFreq = -1;

    for (auto &p : freq) {
        if (p.second > bestFreq) {
            bestFreq = p.second;
            bestVal = p.first;
        }
    }

    cout << bestVal;
    return 0;
}