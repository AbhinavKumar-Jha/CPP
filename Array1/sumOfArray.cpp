#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        sum += arr[i];
    }
    cout<<sum;
}