#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    vector<int> finalPrice = prices;
    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() && prices[st.top()] >= prices[i]) {
            int idx = st.top();
            st.pop();
            finalPrice[idx] = prices[idx] - prices[i];
        }

        st.push(i);
    }

    for (int i = 0; i < n; i++)
        cout << finalPrice[i] << " ";

    return 0;
}
