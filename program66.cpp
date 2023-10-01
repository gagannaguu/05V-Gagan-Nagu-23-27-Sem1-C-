//Create a program to find the largest element in each row of a matrix.
#include<iostream>
using namespace std;

int main(){

    int r, c;

    cout<<"Enter the number of rows and columns :";
    cin>> r >> c;

    int a[r][c];

    cout<<"\nEnter the elements of matrix :";

    for(int i=0; i<r; i++){

        for(int j=0; j<c; j++)
         cin>>a[i][j];
    }
cout<<"The largest elements from each row are: "<<endl;
    for(int i=0; i<r; i++){

        int maxi = INT_MIN;

        for(int j=0; j<c; j++)
         maxi = max(a[i][j], maxi);

        cout<<maxi<<"\n";
    }

    return 0;
}