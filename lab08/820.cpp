#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> mp;
    string cmd, key, value;

    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "set") {
            cin >> key >> value;
            mp[key] = value;
        } else {
            cin >> key;
            if (mp.count(key))
                cout << mp[key] << "\n";
            else
                cout << "KE: no key " << key << " found in the document\n";
        }
    }

    return 0;
}