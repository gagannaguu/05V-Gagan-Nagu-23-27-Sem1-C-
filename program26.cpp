#include <iostream>
using namespace std;

int main() {

    int num, sum = 0, i = 1;
    cout << "Enter a number (between 1 and infinity): ";
    cin >> num;

    while (num <= 0) {
        cout << "Enter a number (between 1 and infinity): ";
        cin >> num;
    }

    cout << "The sum of " << num << " natural numbers: " << endl;

    while (i <= num) {
        sum += i;
        if (i < num) {
            cout << i << " + ";
        } else {
            cout << i << " = ";
        }
        i++;
    }

    cout << sum << endl;

    return 0;
}
