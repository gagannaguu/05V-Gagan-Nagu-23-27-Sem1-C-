#include <iostream>
using namespace std;

double squareOfNum(double n) {
    return n * n;
}

double cubeOfNum(double n) {
    return n * n * n;
}

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " is (" << num << "^2): " << squareOfNum(num) << endl;
    cout << "Cube of " << num << " is (" << num << "^3): " << cubeOfNum(num) << endl;

    return 0;
}
