#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows/columns :";
    cin>>n;
    int arr[n][n];
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";
    // Print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Transpose in the same matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // Swapping of i,j and j,i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<endl;
    // Printing the transposed matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}