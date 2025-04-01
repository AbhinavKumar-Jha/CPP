// Leetcode 69 (Sqrt(x))
#include<iostream>
using namespace std;
int main(){
    int x = 25;
    int lo=0;
    int hi=x;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid==x){
            cout<<mid;
            return 0;
        }
        if(mid*mid>x) hi=mid-1;
        else lo=mid+1;
    }
    cout<<hi;
    return 0;
}