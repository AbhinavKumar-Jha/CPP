#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number :";
    cin>>a;
    int b;
    cout<<"Enter second number :";
    cin>>b;
    int c;
    cout<<"Enter third number :";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is Greatest";
    }
    if(b>a && b>c){
        cout<<b<<" is Greatest";
    }
    if(c>a && c>b){
        cout<<c<<" is Greatest";
    }
    // else{
    //     cout<<"C is Greatest";
    // }
    return 0;
}