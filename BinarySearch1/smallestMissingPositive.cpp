
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,8,9,12};
    int n=8;
//  // Linear Approach   TC - O(n)
    // for(int i=0;i<n;i++){
    //     if(i!=arr[i]){
    //         cout<<i;
    //         break;
    //     }
    // }

// This is Binary Search  TC - O(logn)
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
    return 0;
}