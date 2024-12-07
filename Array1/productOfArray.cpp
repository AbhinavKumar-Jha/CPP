#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<=n-1;i++){
        product *= arr[i];
    }
    cout<<product; 
}