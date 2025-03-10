#include<iostream>
using namespace std;
int power(int a, int b){
    if(a==0 && b==0){
        cout<<"a raised to power b is not defined";
        return -100;
    }
    if(a==0) return 0;
    int p=1;
    for(int i=1;i<=b;i++){
        p *= a;
    }
    return p;
}
int main(){
    cout<<power(3,0);
    return 0;
}