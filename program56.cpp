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
 
    std::cout << "Is sorted: " << std::boolalpha <<
        std::is_sorted(std::begin(numbers), std::end(numbers));
 
    return 0;
}