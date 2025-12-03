#include <iostream>
#include <vector>
using namespace std;

int toMin(int h, int m) {
    return h * 60 + m;
}

int main() {
    int N;
    cin >> N;

    vector<int> work(1440, 0);

    for (int i = 0; i < N; i++) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        int start = toMin(A, B);
        int end = toMin(C, D);

        if (start == end) {
            for (int i = 0; i < 1440; i++) work[i]++;
        }
        else if (start < end) {
            for (int t = start; t < end; t++) work[t]++;
        }
        else {
            for (int t = start; t < 1440; t++) work[t]++;
            for (int t = 0; t < end; t++) work[t]++;
        }
    }

    int result = 0;
    for (int t = 0; t < 1440; t++)
        if (work[t] == N) result++;

    cout << result;
    return 0;
}