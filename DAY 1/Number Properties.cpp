#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;

    if (n > 0) cout << "Positive" << endl;
    else if (n < 0) cout << "Negative" << endl;
    else cout << "Zero" << endl;

    if (n >= 0 && n <= 9) cout << "Single Digit" << endl;
    else if (n >= 10 && n <= 99) cout << "Double Digit" << endl;
    else cout << "More than two digits" << endl;
    return 0;
}
