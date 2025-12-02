#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOperator(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/';
}

int main() {
    string s;
    getline(cin, s);

    stack<char> st;
    vector<string> output;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == ' ') continue;

        if (isdigit(c)) {
            string num;
            while (i < n && isdigit(s[i])) {
                num.push_back(s[i]);
                i++;
            }
            i--;  // fix after loop
            output.push_back(num);
        }
        else if (c == '(') {
            st.push(c);
        }        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                output.push_back(string(1, st.top()));
                st.pop();
            }
            st.pop();  // remove '('
        }
        // operator
        else if (isOperator(c)) {
            while (!st.empty() && isOperator(st.top()) &&
                   precedence(st.top()) >= precedence(c)) {
                output.push_back(string(1, st.top()));
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        output.push_back(string(1, st.top()));
        st.pop();
    }

    for (int i = 0; i < output.size(); i++) {
        if (i) cout << " ";
        cout << output[i];
    }

    return 0;
}