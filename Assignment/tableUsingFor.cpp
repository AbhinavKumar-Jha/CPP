#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=n;i<=n*10;i+=n){
        cout<<i<<endl;
    }
    return 0;
}