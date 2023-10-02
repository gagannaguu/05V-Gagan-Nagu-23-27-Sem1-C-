#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0) {
        cout << num << " is divisible by both 5 and 11" << endl;
    } else if (num % 5 == 0) {
        cout << num << " is divisible by 5" << endl;
    } else if (num % 11 == 0) {
        cout << num << " is divisible by 11" << endl;
    } else {
        cout << num << " is not divisible by both 5 and 11" << endl;
    }

    return 0;
}
