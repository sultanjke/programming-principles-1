#include <iostream>
#include <vector>
#include <set>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    vector<int> arr;
    stringstream ss(line);
    int val;
    while (ss >> val) arr.push_back(val);

    int X;
    cin >> X;

    set<int> st(arr.begin(), arr.end());

    int cnt = 0;
    for (int i = 1; i <= 1000; i++) {
        if (st.count(i) == 0) {
            cnt++;
            if (cnt == X) {
                cout << i;
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}