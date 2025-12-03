#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 1;  // start from the first odd number
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << num << " ";
        cout << "\n";
        num += 2;  // next odd number
    }

    return 0;
}