#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;

    bool operator<(const Point& other) const {
        if (x < other.x) return true;
        if (x > other.x) return false;
        return y < other.y;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Point> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].x >> v[i].y;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i].y << "\n";
    }

    return 0;
}