#include <iostream>
using namespace std;

int main() {
    float p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    float si = (p * r * t) / 100;
    cout << si;
    
    return 0;
}
