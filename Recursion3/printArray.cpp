#include<iostream>
using namespace std;
void display(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
   int arr[]={2,1,6,3,9,0,2,7,4};
   int n = sizeof(arr)/sizeof(arr[0]);
   display(arr,n,0);
    return 0;
}