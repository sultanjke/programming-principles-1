#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<string, char> toDigit = {
        {"ONE", '1'}, {"TWO", '2'}, {"THR", '3'},
        {"FOU", '4'}, {"FIV", '5'}, {"SIX", '6'},
        {"SEV", '7'}, {"EIG", '8'}, {"NIN", '9'},
        {"ZER", '0'}
    };

    map<char, string> toTrip = {
        {'1',"ONE"}, {'2',"TWO"}, {'3',"THR"},
        {'4',"FOU"}, {'5',"FIV"}, {'6',"SIX"},
        {'7',"SEV"}, {'8',"EIG"}, {'9',"NIN"},
        {'0',"ZER"}
    };

    int plusPos = s.find('+');
    string A = s.substr(0, plusPos);
    string B = s.substr(plusPos + 1);

    string num1 = "", num2 = "";

    for (int i = 0; i < A.size(); i += 3)
        num1 += toDigit[A.substr(i, 3)];

    for (int i = 0; i < B.size(); i += 3)
        num2 += toDigit[B.substr(i, 3)];

    long long x = stoll(num1);
    long long y = stoll(num2);
    long long z = x + y;

    string str = to_string(z);
    string result = "";

    for (char c : str)
        result += toTrip[c];

    cout << result;
    return 0;
}