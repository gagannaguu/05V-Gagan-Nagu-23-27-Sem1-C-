#include <iostream>
using namespace std;

int main() {
    int num;
    char displayChar = 'A';

    cout << "Enter the number of lines: ";
    cin >> num;

    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 1; i < num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << displayChar << " ";
            displayChar++;
        }
        cout << endl;
    }

    return 0;
}
