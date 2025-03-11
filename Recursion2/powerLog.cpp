#include<iostream>
using namespace std;
int power(int x, int n){
    if(n==1) return x;
    int ans=power(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }
}
int main(){
    cout<<power(3,6);
    return 0;
}