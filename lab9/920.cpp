#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> undoStack;
    vector<string> redoStack;

    while (n--) {
        string cmd;
        getline(cin, cmd);

        if (cmd.rfind("DO ", 0) == 0) {
            string action = cmd.substr(3);
            undoStack.push_back(action);
            redoStack.clear(); 
        }
        else if (cmd == "UNDO") {
            if (!undoStack.empty()) {
                redoStack.push_back(undoStack.back());
                undoStack.pop_back();
            }
        }
        else if (cmd == "REDO") {
            if (!redoStack.empty()) {
                undoStack.push_back(redoStack.back());
                redoStack.pop_back();
            }
        }
        else if (cmd == "HISTORY") {
            if (undoStack.empty()) {
                cout << "EMPTY" << endl;
            } else {
                for (int i = 0; i < undoStack.size(); i++) {
                    if (i) cout << " ";
                    cout << undoStack[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}