#include <iostream>
using namespace std;

int main() {
int num;

// Input the number from the user
cout << "Enter a number: ";
cin >> num;

while (num >= 10) {
int sum = 0;

// Calculate the sum of digits
while (num > 0) {
sum += num % 10;
num /= 10;
}

// Update the number with the sum of digits
num = sum;
}
 // At this point, 'num' contains the single-digit sum
cout << "The single-digit sum is: " << num <<endl;

return 0;
}
