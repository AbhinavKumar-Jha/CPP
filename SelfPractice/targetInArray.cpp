#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=18;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"Present";
    else cout<<"Not Present";
    return 0;
}