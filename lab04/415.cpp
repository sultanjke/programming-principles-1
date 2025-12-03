#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxVal = a[0];
    int minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) maxVal = a[i];
        if (a[i] < minVal) minVal = a[i];
    }

    int size = maxVal - minVal + 1;
    int count[2001] = {0};

    for (int i = 0; i < n; i++)
        count[a[i] - minVal]++;

    int maxFreq = count[0];
    for (int i = 1; i < size; i++)
        if (count[i] > maxFreq)
            maxFreq = count[i];

    for (int i = size - 1; i >= 0; i--) {
        if (count[i] == maxFreq)
            cout << i + minVal << " ";
    }

    return 0;
}
