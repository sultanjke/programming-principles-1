#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, pair<double,int>> mp;

    for (int i = 0; i < n; i++) {
        string name;
        double gpa;
        cin >> name >> gpa;
        mp[name].first += gpa;
        mp[name].second++;
    }

    for (auto &p : mp) {
        double avg = p.second.first / p.second.second;
        cout << p.first << ": " << fixed << setprecision(3) << avg << "\n";
    }

    return 0;
}