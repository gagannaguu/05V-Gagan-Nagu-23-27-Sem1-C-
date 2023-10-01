#include <iostream>
using namespace std;

int arr[] = {};
int fact(int n) {
    if (n >= 0) {
        arr[0] = 1;
        for (int i = 1; i <= n; ++i) {
            arr[i] = i * arr[i - 1];
        }
        return arr[n];
    }
    return 1;
}
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num) << endl;
    return 0;
}