#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;

    while (n--) {
        cin >> s;
        string suffix = "@gmail.com";

        if (s.size() >= suffix.size() &&
            s.substr(s.size() - suffix.size()) == suffix)
        {
            int pos = s.find('@');
            cout << s.substr(0, pos) << "\n";
        }
    }

    return 0;
}