// WAP to print table of Any Number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number whose table you want to print :";
    cin>>n;
    for(int i=n;i<=n*10;i=i+n){
        cout<<i<<endl;
    }
    return 0;
}