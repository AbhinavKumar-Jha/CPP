#include<iostream>
using namespace std;
int main(){
    int arr[]={4,4,1,3,2,3,10,1,2};
    int n=9;
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    cout<<res<<endl;
    return 0;
}