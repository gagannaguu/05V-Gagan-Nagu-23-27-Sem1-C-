#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << endl << "The pattern with " << num << " rows is" << endl << endl;

    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++) {
            cout << j+1;
        }
        for (int k = i; k >= 1; k--){
            cout <<k;
        }
        cout << endl;
    }

    return 0;
}
