#include <iostream>

using namespace std;

int main() {

    int n;

    int total_numbers = 0;      

    cin >> n;

    for (int i = 1; i <= n; i += 1) {

        total_numbers += i;

    }

    cout << total_numbers;  

    return 0;

}