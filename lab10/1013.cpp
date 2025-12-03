#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Prices: ";
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i);
        if (i != n - 1) cout << " ";
    }
    cout << "\n";

    long long total = 0;
    ptr = arr;
    for (int i = 0; i < n; i++) {
        total += *(ptr + i);
    }
    cout << "Total: " << total << "\n";

    double avg = static_cast<double>(total) / n;

    ostringstream oss;
    oss << fixed << setprecision(3) << avg;
    string s = oss.str();
    while (!s.empty() && s.back() == '0') s.pop_back();
    if (!s.empty() && s.back() == '.') s.pop_back();

    cout << "Average: " << s;

    delete[] arr;
    return 0;
}
