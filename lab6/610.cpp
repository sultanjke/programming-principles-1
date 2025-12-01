#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (t.size() % s.size() != 0) {
        cout << "NO";
        return 0;
    }

    string x = "";
    int times = t.size() / s.size();

    for (int i = 0; i < times; i++)
        x += s;

    if (x == t) cout << "YES";
    else cout << "NO";

    return 0;
}