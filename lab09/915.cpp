#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> st;
    st.reserve(N);

    vector<long long> sold;
    sold.reserve(N);

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        if (x > 0) {
            st.push_back(x);
        } else {
            if (!st.empty()) {
                sold.push_back(st.back());
                st.pop_back();
            }
        }
    }

    if (sold.empty()) {
        cout << -1;
    } else {
        for (long long v : sold) {
            cout << v << " ";
        }
    }

    return 0;
}
