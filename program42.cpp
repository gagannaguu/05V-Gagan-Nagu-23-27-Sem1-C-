#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    double sum = 0.0;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            if (i < n){
                cout << "1/" << i << " - ";
            } else {
                cout << "1/" << i << " = ";
            }
            sum += 1.0 / i;
        }
        else {
            if (i < n){
                cout << "1/" << i << " + ";
            } else {
                cout << "1/" << i << " = ";
            }
            sum -= 1.0 / i;
        }
    }

    cout << setprecision(3) << sum << endl;

    return 0;
}
