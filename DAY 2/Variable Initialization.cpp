#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter value for copy init: ";
    cin >> a;
    int b(a);
    int c{a};
    int d;
    cout << "Enter value for default init: ";
    cin >> d;
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}
