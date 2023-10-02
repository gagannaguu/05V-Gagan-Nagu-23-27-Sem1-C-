//Create a program that checks if an array is sorted in ascending order.
#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int numbers[5];
  cout << "Enter 5 numbers: " << endl;
  
  //  store input from user to array
  for (int i = 0; i < 5; ++i)
  {
    cin >> numbers[i];
  }
    // int arr[] = { 2, 8, 4, 5, 7 };
 
    cout << "Is sorted: " << boolalpha <<
    is_sorted(begin(numbers), end(numbers));
 
    return 0;
}