#include <iostream>
using namespace std;


int sumOfNaturalNumbers(int n) {
if (n == 1) {
return 1;
} else {
return n + sumOfNaturalNumbers(n - 1);
}
}

int main() {
int n;

cout << "Enter a positive integer (n): ";
cin >> n;


if (n < 1) {
cout << "Please enter a positive integer." <<endl;
return 1;
}


int sum = sumOfNaturalNumbers(n);
cout << "Sum of natural numbers from 1 to " << n << " is: " << sum <<endl;

return 0;
}
