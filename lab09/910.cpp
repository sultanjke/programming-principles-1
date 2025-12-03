#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student {
    string name;
    long long points;
};

bool cmp(const Student &a, const Student &b) {
    if (a.points != b.points)
        return a.points > b.points;
    return a.name > b.name;
}

int main() {
    int n;
    cin >> n;

    map<string, long long> sumPoints;
    long long total = 0;

    for (int i = 0; i < n; ++i) {
        string name;
        long long pts;
        cin >> name >> pts;
        sumPoints[name] += pts;
        total += pts;
    }

    vector<Student> v;
    v.reserve(sumPoints.size());
    for (map<string, long long>::iterator it = sumPoints.begin(); it != sumPoints.end(); ++it) {
        Student s;
        s.name = it->first;
        s.points = it->second;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    for (size_t i = 0; i < v.size(); ++i) {
        double percent = v[i].points * 100.0 / total;
        cout << v[i].name << " " << percent << "%" << "\n";
    }

    return 0;
}
