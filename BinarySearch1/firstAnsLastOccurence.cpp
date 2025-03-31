// Leetcode 34 (Find First and Last Position of Element in Sorted Array)
#include<iostream>
using namespace std;
int firstoccurence(int arr[], int n, int x){
    int lo=0;
    int hi=n-1;
    int first=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            first=mid;
            hi=mid-1;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    return first;
}
int lastoccurence(int arr[], int n, int x){
    int lo=0;
    int hi=n-1;
    int last=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            last=mid;
            lo=mid+1;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    return last;
}
int main(){
    int arr[13]={1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n=13;
    int x=3;
    int first=firstoccurence(arr,n,x);
    int last=lastoccurence(arr,n,x);
    cout<<"["<<first<<", "<<last<<"]";
    return 0;
}