#include <iostream>
using namespace std;

int main() {
    int num, tempNum, remainder, digits = 0, result = 0, tempDigits = 0;

    cout << "Enter an integer: ";
    cin >> num;

    tempNum = num;

    while (tempNum != 0) {
        tempNum /= 10;
        digits++;
    }

    tempNum = num;

    cout << endl << "since, " << endl;

    while (tempNum != 0) {
        remainder = tempNum % 10;
        if (tempDigits < 2) {
            cout << remainder << "^3 + ";
        } else {
            cout << remainder << "^3 ";
        }
        result += pow(remainder, digits);
        tempNum /= 10;
        tempDigits++;
    }

    if (result == num) {

        cout << "= " << num << endl;
        cout << num << " is an Armstrong number." << endl;
    } else {

        cout << "!= " << num << endl;
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
