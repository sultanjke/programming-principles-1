#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int main() {
    string s;
    getline(cin, s);

    stack<char> st;         
    vector<string> output;

    for (int i = 0; i < (int)s.size(); i++) {
        char c = s[i];

        if (c == ' ') continue;

        if (c >= '0' && c <= '9') {
            output.push_back(string(1, c));
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                output.push_back(string(1, st.top()));
                st.pop();
            }
            if (!st.empty() && st.top() == '(') st.pop();
        }
        else {
            while (!st.empty() && st.top() != '(' &&
                   precedence(st.top()) >= precedence(c)) {
                output.push_back(string(1, st.top()));
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        if (st.top() != '(') output.push_back(string(1, st.top()));
        st.pop();
    }

    for (int i = 0; i < (int)output.size(); i++) {
        if (i) cout << ' ';
        cout << output[i];
    }
    cout << '\n';

    return 0;
}
