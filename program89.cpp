#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << endl << "The pattern with " << num << "rows is" << endl ;

    for (int i = 0; i <= num; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
