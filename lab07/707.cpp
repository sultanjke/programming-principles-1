#include <iostream>
using namespace std;

int main() {
    double total, girls;
    cin >> total >> girls;

    double percent = girls * 100.0 / total;
    cout << percent;

    return 0;
}