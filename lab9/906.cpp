#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> s;
    string login;

    for (int i = 0; i < n; i++) {
        cin >> login;
        if (s.count(login) == 0) {
            cout << "new user added\n";
            s.insert(login);
        } else {
            cout << "user already exists\n";
        }
    }

    return 0;
}