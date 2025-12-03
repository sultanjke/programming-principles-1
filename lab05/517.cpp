#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    if (r < 0 || r > 7 || c < 0 || c > 7) {
        cout << "Impossible";
        return 0;
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == r && j == c) cout << "1 ";
            else if (i == r || j == c || (i - j == r - c) || (i + j == r + c)) cout << "2 ";
            else cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}