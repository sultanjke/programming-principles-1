#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    bool perfect = true;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                perfect = false;
                break;
            }
        }
        if (!perfect) break;
    }

    if (perfect)
        cout << "Perfect.";
    else
        cout << "Not perfect.";

    return 0;
}
