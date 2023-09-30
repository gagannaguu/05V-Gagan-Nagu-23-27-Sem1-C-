#include <iostream>
using namespace std;

int fib(int n) {

    if(n == 0) {
        return 0;
    } else if (n == 1) { 
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main() {

    int num;
    cout << "Enter number (for which you wanna find fibonacci of): ";
    cin >> num;

    if (num < 0) {
        cout << "Invalid number, fibonacci of " << num << "can't be found (Fibonacci is not defined for nagitive numbers)";
    }

    cout << "The fibonacci of " << num << " is " << fib(num) << endl;

    return 0;
}
