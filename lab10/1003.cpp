#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;

    int compare(const Point& other) const {
        if (x < other.x) return -1;
        if (x > other.x) return 1;
        if (y < other.y) return -1;
        if (y > other.y) return 1;
        return 0;
    }
};

bool f(const Point& a, const Point& b) {
    return a.compare(b) < 0;
}

int main() {
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