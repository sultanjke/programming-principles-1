#include <iostream>
#include <set>
using namespace std;

int main() {
    set<long long> s;
    long long x;

    while (cin >> x) s.insert(x);

    cout << s.size();
    return 0;
}