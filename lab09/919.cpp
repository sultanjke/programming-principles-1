#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // clear newline

    queue<string> q;

    while (n--) {
        string cmd;
        getline(cin, cmd);

        if (cmd.rfind("ARRIVE", 0) == 0) {
            // Extract the name after "ARRIVE "
            string name = cmd.substr(7);
            q.push(name);
            cout << name << " joined the line" << endl;
        }
        else if (cmd == "SERVE") {
            if (q.empty()) {
                cout << "No customers to serve" << endl;
            } else {
                cout << q.front() << " has been served" << endl;
                q.pop();
            }
        }
        else if (cmd == "SHOW") {
            if (q.empty()) {
                cout << "Line is empty" << endl;
            } else {
                cout << "Line:";
                queue<string> temp = q;
                while (!temp.empty()) {
                    cout << " " << temp.front();
                    temp.pop();
                }
                cout << endl;
            }
        }
    }
    return 0;
}