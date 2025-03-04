#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f *= i;
    }
    return f;
}
int main(){
    cout<<fact(5);
    return 0;
}