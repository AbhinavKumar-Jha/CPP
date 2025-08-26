#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    cout<<isPrime(2);
    return 0;
}