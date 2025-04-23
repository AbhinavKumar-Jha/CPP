#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows :";
    cin>>m;
    int n;
    cout<<"Enter the number of columns :";
    cin>>n;
    int arr[m][n];
    // input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}