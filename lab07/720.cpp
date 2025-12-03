#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,char> toDigit = {
    {"ONE",'1'}, {"TWO",'2'}, {"THR",'3'},
    {"FOU",'4'}, {"FIV",'5'}, {"SIX",'6'},
    {"SEV",'7'}, {"EIG",'8'}, {"NIN",'9'},
    {"ZER",'0'}
};

map<char,string> toTrip = {
    {'1',"ONE"}, {'2',"TWO"}, {'3',"THR"},
    {'4',"FOU"}, {'5',"FIV"}, {'6',"SIX"},
    {'7',"SEV"}, {'8',"EIG"}, {'9',"NIN"},
    {'0',"ZER"}
};

string decode(const string &s) {
    string num = "";
    for (int i = 0; i < s.size(); i += 3) {
        num += toDigit[s.substr(i, 3)];
    }
    return num;
}

string encode(long long n) {
    string s = to_string(n);
    string out = "";
    for (char c : s) out += toTrip[c];
    return out;
}

int main() {
    string expr;
    cin >> expr;

    int opPos = -1;
    char op;
    for (int i = 0; i < expr.size(); i++) {
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*') {
            opPos = i;
            op = expr[i];
            break;
        }
    }

    string A = expr.substr(0, opPos);
    string B = expr.substr(opPos + 1);

    long long x = stoll(decode(A));
    long long y = stoll(decode(B));
    long long z;

    if (op == '+') z = x + y;
    else if (op == '-') z = x - y;
    else z = x * y;

    cout << encode(z);
    return 0;
}
