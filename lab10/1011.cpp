#include <iostream>
using namespace std;

void updateValue(int* ptr, int val) {
    *ptr += val;
}

int main() {
    int a, v;
    cin >> a >> v;

    updateValue(&a, v);

    cout << a;

    return 0;
}