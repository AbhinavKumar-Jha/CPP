#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    cout<<"Enter base :";
    cin>>a;
    int b;
    cout<<"Enter exponent :";
    cin>>b;
    cout<<a<<" raised to power "<<b<<" is "<<power(a,b);
    return 0;
}