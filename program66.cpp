//Create a program to find the largest element in each row of a matrix.
// #include<iostream>
// using namespace std;
//  const int N = 4;
 
// void printArray(int result[], int no_of_rows) {
//     for (int i = 0; i < no_of_rows; i++) {
//         cout<< result[i]<<"\n";
//     }
// }
 
// void maxelement(int no_of_rows, int arr[][N]) {
//     int result[no_of_rows];
//     for (int i = 0; i < no_of_rows; i++) {
//         int max = *max_element(arr[i], arr[i]+N);
//         result[i] = max;
//     }
//     printArray(result,no_of_rows);
// }
 
// int main() {

//  int arr[][N] = {{3, 4, 1, 8},
//              {1, 4, 9, 11},
//                     {76, 34, 21, 1},
//                     {2, 1, 4, 5} };
//    maxelement(4, arr);
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){

    int r, c;

    cout<<"Enter the number od rows and columns :";
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