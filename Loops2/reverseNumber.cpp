#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int reverse=0;
    int ld=0;
    while(n>0){
        reverse =reverse*10;
        ld = n % 10;
        reverse += ld;
        n /= 10;
    }
    cout<<reverse;
    return 0;
}