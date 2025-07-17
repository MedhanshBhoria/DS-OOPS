#include <iostream>
using namespace std;

int x = 10;

int main() {
    int x;
    cout << "Enter local value of x: ";
    cin >> x;
    {
        int x;
        cout << "Enter block value of x: ";
        cin >> x;
        cout << x << endl;
    }
    cout << x << endl;
    cout << ::x << endl;
    return 0;
}
