#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    float avg = sum / 5.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg;
    return 0;
}
