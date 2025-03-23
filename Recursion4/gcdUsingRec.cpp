#include<iostream>
using namespace std;
int gcd(int a, int b){
    // Base Case
    if(a==0) return b;
    else gcd(b%a,a);
}
int main(){
    int a=27;
    int b=45;
    // TC of  gcd(a,b) is O(log(a+b))
    cout<<gcd(a,b);
    // cout<<gcd(min(a,b),max(a,b));
    return 0;
}