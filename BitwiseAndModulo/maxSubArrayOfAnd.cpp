#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={12,3,1,6,1,6,18,18,6,6,6,4,3,8,13,13,13,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    int max_el=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_el){
            max_el=arr[i];
            count=1;
        }
        else if(arr[i]==max_el){
            count ++;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}