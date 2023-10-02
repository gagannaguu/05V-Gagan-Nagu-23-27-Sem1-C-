#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice, toggle = 1;

    cout << "Simple Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Rember" << endl;
    cout << "Enter your choice (1/2/3/4/5): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "Result(" << num1 << " + " << num2 << ") is " << num1 + num2 << endl;
            toggle = 0;
            break;
        case 2:
            cout << "Result(" << num1 << " - " << num2 << ") is " << num1 - num2 << endl;
            toggle = 0;
            break;
        case 3:
            cout << "Result(" << num1 << " X " << num2 << ") is " << num1 * num2 << endl;
            toggle = 0;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result(" << num1 << " / " << num2 << ") is " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            toggle = 0;
            break;
        case 5:
            if (num2 != 0) {
                cout << "Result(" << num1 << " % " << num2 << ") is " << int(num1) % int(num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            toggle = 0;
            break;
        default:
            cout << "Invalid choice! Please enter 1, 2, 3, or 4." << endl;
            toggle = 1;
            break;
    }

    return 0;
}
