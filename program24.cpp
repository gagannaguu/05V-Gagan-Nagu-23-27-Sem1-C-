//Write a C++ program to check if a number is prime or composite.
#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i,flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;    
  if (n==1 || n==0){
  cout<<n<<" neither prime nor composite"<<endl;
  }
  else {
  
  for(i = 2; i <= n/2; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  } 
  if (flag==0) {
      cout << "Number is Prime."<<endl;  
  }
}
  
  return 0;  
}