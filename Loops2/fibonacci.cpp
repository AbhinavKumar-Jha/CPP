#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;
    return 0;
}