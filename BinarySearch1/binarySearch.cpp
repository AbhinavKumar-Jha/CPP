// Leetcode 704 (Binary Search)
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 15;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            cout<<mid<<" is index where target is present";
            return 0;
        } 
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;
    }
    cout<<"Not present";
    return 0;
}