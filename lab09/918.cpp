#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> q;

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            string name;
            cin >> name;
            q.push(name);

            cout << q.front() << "\n";
        }
        else if (type == 2) {
            if (!q.empty()) {
                q.pop();
            }

            if (q.empty()) {
                cout << "queue is empty\n";
            } else {
                cout << q.front() << "\n";
            }
        }
    }

    return 0;
}