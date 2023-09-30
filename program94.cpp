#include <iostream>
using namespace std;

int main() {

    int num, displayNum = 1;
    cout << "Enter the number of lines: ";
    cin >> num;

    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << displayNum << " ";
            displayNum++;
        }
        cout << endl;
    }

    return 0;
}
