#include <iostream>
using namespace std;

int main() {
    int h;
    cin >> h;

    if (h % 2 != 0) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < h - i - 1; j++)
                cout << ".";
            for (int j = 0; j <= i; j++)
                cout << "#";
            cout << "\n";
        }
    } else {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j <= i; j++)
                cout << "#";
            for (int j = 0; j < h - i - 1; j++)
                cout << ".";
            cout << "\n";
        }
    }

    return 0;
}
