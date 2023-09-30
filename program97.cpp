#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of lines: ";
    cin >> num;

    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 1; i <= num; i++) {
        
        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }

        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    for (int i = num - 1; i >= 1; i--) {

        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }

        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
