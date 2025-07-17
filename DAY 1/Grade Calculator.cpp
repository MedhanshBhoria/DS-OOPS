#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    int total = m1 + m2 + m3 + m4 + m5;
    float avg = total / 5.0;
    cout << "Total: " << total << endl;
    cout << "Average: " << avg << endl;
    if (avg >= 90) cout << "A";
    else if (avg >= 80) cout << "B";
    else if (avg >= 70) cout << "C";
    else if (avg >= 60) cout << "D";
    else cout << "F";
    return 0;
}
