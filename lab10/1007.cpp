#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Date {
    int d, m, y;
};

bool cmp(const Date &a, const Date &b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

int main() {
    vector<Date> v;
    while (true) {
        string dd;
        cin >> dd;
        if (dd == "0") break;
        Date x;
        x.d = stoi(dd);
        cin >> x.m >> x.y;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto &t : v) {
        cout << setw(2) << setfill('0') << t.d << " "
             << setw(2) << setfill('0') << t.m << " "
             << setw(4) << setfill('0') << t.y << "\n";
    }

    return 0;
}
