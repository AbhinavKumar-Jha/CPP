#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    // if(n%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }
  //  condition ? true : false
    (n%2==0) ? cout<<"Even"  : cout<<"Odd";
    return 0;
}