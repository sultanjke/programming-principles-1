#include <iostream>

using namespace std;

int main() {

    int mid, end, fin;

    cin >> mid >> end >> fin;

    if ((mid + end >= 30 && fin >= 20 && mid + end + fin >= 70)) {

        cout << "YES!";

    } else {

        cout << "NO.";

    }
    
    return 0;

}