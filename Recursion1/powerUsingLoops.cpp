#include<iostream>
using namespace std;
int power(int a, int b){
    if(a==0) return 0;
    int p=1;
    for(int i=1;i<=b;i++){
        p *= a;
    }
    return p;
}
int main(){
    cout<<power(3,4);
    return 0;
}