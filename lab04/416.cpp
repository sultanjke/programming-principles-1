#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 10 == 7)   // check if the number ends with 7
            count++;
    }

    cout << count;
    return 0;
}