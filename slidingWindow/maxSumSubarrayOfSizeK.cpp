#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int Sum = 0;
    for(int i=0;i<k;i++){
        Sum += arr[i];
    }
    maxSum = Sum;
    int i = 1;
    int j=k;
    while(j<n){
        Sum = Sum + arr[j]-arr[i-1];
        if(maxSum<Sum){
            maxSum = Sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
    return 0;
}