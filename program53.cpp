#include <iostream>
#include <string>
using namespace std;

int main() {
string str;

cout << "Enter a string: ";
cin >> str;

string reversed = str;
reverse(reversed.begin(), reversed.end());

if (str == reversed) {
cout << "\"" << str << "\" is a palindrome." <<endl;
} else {
cout << "\"" << str << "\" is not a palindrome." <<endl;
}

return 0;
}
