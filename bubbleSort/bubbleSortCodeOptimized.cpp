#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,4,6,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // T C - O(n)
    // Bubble sort
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
            if(flag==true){ // Swap didn't happened
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}