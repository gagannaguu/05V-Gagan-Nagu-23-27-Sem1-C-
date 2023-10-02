#include <iostream>
using namespace std;

int main() {

    int N, i = 1;
    cout << "Enter a number (between 1 and infinity): ";
    cin >> N;

    while (N <= 0) {
        cout << "Enter a number (between 1 and infinity): ";
        cin >> N;
    }

    cout << "All natural numbers string from 1 to " << N << " are " << endl; 

    while (i <= N) {
        cout << i << endl;
        i++;
    }

    return 0;
}
