#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;

    long long dist2(const Point& p) const {
        long long dx = x - p.x;
        long long dy = y - p.y;
        return dx * dx + dy * dy;
    }

    int compare(const Point& other, const Point& P) const {
        long long d1 = dist2(P);
        long long d2 = other.dist2(P);
        if (d1 < d2) return -1;
        if (d1 > d2) return 1;
        return 0;
    }
};

Point P;

bool f(const Point& a, const Point& b) {
    return a.compare(b, P) < 0;
}

int main() {
    cin >> P.x >> P.y;

    int n;
    cin >> n;

    vector<Point> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].x >> v[i].y;
    }

    sort(v.begin(), v.end(), f);

    for (int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i].y << "\n";
    }

    return 0;
}