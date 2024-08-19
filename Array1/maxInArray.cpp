#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elments of the array :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"The maximum value is :"<<max;
    return 0;
}