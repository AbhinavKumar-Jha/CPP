#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    int Smax = INT_MIN; // Smax means second largest
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=max && Smax<arr[i][j]) Smax=arr[i][j];
        }
    }
    // cout<<max;
    cout<<Smax;
    return 0;
}