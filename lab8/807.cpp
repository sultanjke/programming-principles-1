#include <iostream>
#include <vector>
using namespace std;

double getGP(int total) {
    if (total < 50) return 0.0;
    if (total <= 54) return 1.0;
    if (total <= 59) return 1.0 + 1.0/3;
    if (total <= 64) return 1.0 + 2.0/3;
    if (total <= 69) return 2.0;
    if (total <= 74) return 2.0 + 1.0/3;
    if (total <= 79) return 2.0 + 2.0/3;
    if (total <= 84) return 3.0;
    if (total <= 89) return 3.0 + 1.0/3;
    if (total <= 94) return 3.0 + 2.0/3;
    return 4.0;
}

int main() {
    int n;
    cin >> n;

    double sum = 0, creditsSum = 0;

    for (int i = 0; i < n; i++) {
        int att1, att2, fin, c;
        cin >> att1 >> att2 >> fin >> c;

        int total = att1 + att2 + fin;
        double gp = 0.0;

        if (att1 + att2 >= 30 && fin >= 20)
            gp = getGP(total);

        sum += gp * c;
        creditsSum += c;
    }

    cout << sum / creditsSum;
    return 0;
}