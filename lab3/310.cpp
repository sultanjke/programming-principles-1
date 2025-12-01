#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int count = 0;

    for (int i = 0; i < n; ++i) {

        int k;

        cin >> k;

        if (k == 0) {

            count++;
            continue;

        }

        while (k > 0) {

            if (k % 10 == 0) {

                count++;

            }

            k /= 10;

        }

    }

    cout << count;

    return 0;

}