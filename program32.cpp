#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int range;
    cout << "Enter the range: ";
    cin >> range;

    cout << endl << "The multiplication table of " << num << " till " << range << " is " << endl << endl;

    for (int i = 1; i <= range; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}