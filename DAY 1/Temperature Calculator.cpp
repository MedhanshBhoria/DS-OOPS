#include <iostream>
using namespace std;

int main() {
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    float f = (c * 9/5) + 32;
    float k = c + 273.15;
    cout << "Fahrenheit: " << f << endl;
    cout << "Kelvin: " << k;
    
    return 0;
}
