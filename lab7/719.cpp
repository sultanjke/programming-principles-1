#include <iostream>
#include <string>
using namespace std;

char normalizeChar(char c) {
    c = tolower(c);

    if (c == 'b' || c == 'p') return 'b';
    if (c == 'i' || c == 'e') return 'i';

    return c;
}

string normalizeWord(const string &s) {
    string t = "";
    for (char c : s) t += normalizeChar(c);
    return t;
}

bool similarArabic(string a, string b) {
    return normalizeWord(a) == normalizeWord(b);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string a, b;
        cin >> a >> b;

        if (similarArabic(a, b)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}