// Take two int values from user and print greatest among them
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    if(a>b){
        cout<<a<<" is Greatest";
    }
    else{
        cout<<b<<" is Greatest";
    }

    return 0;
}