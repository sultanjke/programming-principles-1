#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (char c : s) sum += int(c);

    if (sum > 300) cout << "It is tasty!";
    else cout << "Oh, no!";

    return 0;
}