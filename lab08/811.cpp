#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> s;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name;
        s.insert(name);
    }

    cout << s.size();
    return 0;
}