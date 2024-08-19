#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i;
    for(i=0;i<=9;i++){
        cout<<"Enter the number :"<<endl;
        cin>>arr[i];
    }
    int n;
    cout<<"Enter a number :";
    cin>>n;
     for(i=0;i<=4;i++){
        if(n==arr[i]){
        cout<<"number is present in the array"<<n;
    }
    }
    return 0;
}

