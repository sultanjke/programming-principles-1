#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == '1' && c == '1') {
            st.pop();
        } else {
            st.push(c);
        }
    }

    string result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    reverse(result.begin(), result.end());

    cout << result;
    return 0;
}