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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // Wave print
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{ // i=1,3,5(ODD NUMBERS)
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        // cout<<endl;
    }
    return 0;
}