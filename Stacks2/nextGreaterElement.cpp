#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Next Greater Element Array
    int nge[n];
    for(int i=0;i<n;i++){
        nge[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                nge[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
    return 0;
}