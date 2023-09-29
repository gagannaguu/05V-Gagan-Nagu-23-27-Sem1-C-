#include <iostream>
#include <string>

using namespace std;

void sortArray(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int lengthOfArray;
    cout << "Enter the length of the array: ";
    cin >> lengthOfArray;

    string array[lengthOfArray];

    for (int i = 0; i < lengthOfArray; i++) {
        cout << "Enter the " << i+1 << "th element of the array: ";
        cin >> array[i];
    }

    sortArray(array, lengthOfArray - 1);

    cout << endl << "Names in alphabetical order:" << endl;
    for (int i = 0; i < lengthOfArray; ++i) {
        cout << array[i] << endl;
    }

    return 0;
}
