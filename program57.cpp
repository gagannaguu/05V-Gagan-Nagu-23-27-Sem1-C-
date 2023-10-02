//Write a C++ program to remove duplicate elements from an array.
#include<iostream>
using namespace std;
int main ()
{
    int j, n,k = 0;
    cout << "Enter size of array : ";
    cin >> n;
   int A[n], B[n];
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
        cin >> A[i];    
    for (int i = 0; i < n; i++)
    {
        for ( j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            cout<<"annn";
            k++;
        }
    }
    cout << "Repeated elements after deletion : ";
    for (int i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}