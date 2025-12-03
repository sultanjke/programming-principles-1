#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];          // assuming reasonable limit for simplicity
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // find maximum value to set counting range
    int maxVal = a[0];
    int minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) maxVal = a[i];
        if (a[i] < minVal) minVal = a[i];
    }

    int size = maxVal - minVal + 1;
    int count[2001] = {0}; // static count array

    // count occurrences
    for (int i = 0; i < n; i++)
        count[a[i] - minVal]++;

    // find the highest frequency
    int maxFreq = count[0];
    for (int i = 1; i < size; i++)
        if (count[i] > maxFreq)
            maxFreq = count[i];

    // print all modes in descending order
    for (int i = size - 1; i >= 0; i--) {
        if (count[i] == maxFreq)
            cout << i + minVal << " ";
    }

    return 0;
}