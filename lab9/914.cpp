#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    stack<int> st;

    for (int i = 0; i < n; i++) {
        int x = a[i];

        while (!st.empty() && st.top() <= x) {
            st.pop();
        }

        st.push(x);

        cout << st.size() << " ";
    }

    return 0;
}