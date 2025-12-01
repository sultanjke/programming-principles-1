#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int n;

    stringstream ss;

    cin >> n;

    ss << hex << uppercase << n;

    cout << ss.str();

    return 0;
}