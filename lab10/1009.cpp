#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>
#include <cmath>
using namespace std;

struct Student {
    int id;
    string name;
    double c, e, p;

    double avg() const {
        return (c + e + p) / 3.0;
    }
};

string formatAvg(double x) {
    if (fabs(x - round(x)) < 1e-9) {
        long long v = llround(x);
        return to_string(v);
    } else {
        ostringstream oss;
        oss << fixed << setprecision(4) << x;
        return oss.str();
    }
}

int main() {
    int n;
    cin >> n;

    vector<Student> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].id >> v[i].name >> v[i].c >> v[i].e >> v[i].p;
    }

    for (int i = 0; i < n; i++) {
        double a = v[i].avg();
        cout << v[i].id << " " << v[i].name << ": Average=" << formatAvg(a) << "\n";
    }

    int best = 0;
    double bestAvg = v[0].avg();
    for (int i = 1; i < n; i++) {
        double a = v[i].avg();
        if (a > bestAvg) {
            bestAvg = a;
            best = i;
        }
    }

    cout << "The best student: " << v[best].name
         << " with the average grade of " << formatAvg(bestAvg);

    return 0;
}
