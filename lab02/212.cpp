#include <iostream>

using namespace std;

int main() {

    double n, m;

    cin >> n >> m;

    if (double percentage = ((m / n) * 100) > 80) {

        cout << "YES";

    } else {

        cout << "NO";

    }

    return 0;

}