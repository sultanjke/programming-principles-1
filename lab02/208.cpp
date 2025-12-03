#include <iostream>

using namespace std;

int main () {

    int n;

    cin >> n;

    if ((n % 2 == 0) && (2 > n > 10)) {

        cout << "Not Super";

    }

    else if ((n % 2 == 0) && (6 > n > 20)) {

        cout << "Super";

    }

    else if ((n % 2 == 0) && (n > 20)) {

        cout << "Not Super";

    }

    else {

        cout << "Super";

    }

    return 0;

}