#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, long long> cnt;
    long long total = 0;

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        while (M--) {
            string place;
            long long x;
            cin >> place >> x;
            cnt[place] += x;
            total += x;
        }
    }

    cout << setprecision(6);

    for (auto &p : cnt) {
        double percent = p.second * 100.0 / total;
        cout << p.first << " " << percent << "\n";
    }

    return 0;
}