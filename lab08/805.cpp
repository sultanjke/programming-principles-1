#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int q;
    cin >> q;

    while (q--) {
        int L, R;
        cin >> L >> R;

        int visible = 0;
        int maxH = -1;

        for (int i = L; i <= R; i++) {
            if (h[i] > maxH) {
                visible++;
                maxH = h[i];
            }
        }

        cout << visible << "\n";
    }

    return 0;
}