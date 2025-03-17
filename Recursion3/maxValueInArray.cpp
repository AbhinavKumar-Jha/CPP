#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n, int idx, int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printMax(arr,n,idx+1,max);
}
int main(){
    int arr[]={2,1,6,3,9,0,2,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);
    return 0;
}