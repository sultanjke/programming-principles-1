#include <iostream>
#include <vector>
using namespace std;

struct Student {
    vector<int> grades;
    int total() const {
        int s = 0;
        for (int x : grades) s += x;
        return s;
    }
};

string getLetter(int score) {
    if (score >= 95) return "A";
    if (score >= 90) return "A-";
    if (score >= 85) return "B+";
    if (score >= 80) return "B";
    if (score >= 75) return "B-";
    if (score >= 70) return "C+";
    if (score >= 65) return "C";
    if (score >= 60) return "C-";
    if (score >= 55) return "D+";
    if (score >= 50) return "D";
    return "F";
}

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        students[i].grades.resize(16);
        for (int j = 0; j < 16; j++) {
            cin >> students[i].grades[j];
        }
    }

    for (int i = 0; i < n; i++) {
        int score = students[i].total();
        cout << "Student grade: " << getLetter(score) << "\n";
    }

    return 0;
}
