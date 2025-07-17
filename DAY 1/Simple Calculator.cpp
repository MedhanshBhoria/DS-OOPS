#include <iostream>
using namespace std;

int main() {
    float n1, n2;
    char operator;
    
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operator;
    cout << "Enter second number: ";
    cin >> n2;

    switch(operator) {
        case '+': cout << "Result: " << n1 + n2; break;
        case '-': cout << "Result: " << n1 - n2; break;
        case '*': cout << "Result: " << n1 * n2; break;
        case '/': 
            if(n2 != 0)
                cout << "Result: " << n1 / n2;
            else
                cout << "Cannot divide by zero";
            break;
        default: cout << "Invalid operator";
    }

    return 0;
}
