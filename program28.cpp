
#include <iostream>
using namespace std;
 
int main()
{
    int num, sum=0;
    cout<<"Enter any number: "<<endl;
    cin>>num;
    int i=2;
    //using while loop for addition of numbers
    while (i<=num)
    {
      sum += i;
      i+=2;  
    }
    cout<<"Sum of all even number between 1 to " << num << ": "<<sum;
    return 0;
}
