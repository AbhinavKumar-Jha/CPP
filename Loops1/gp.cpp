#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=2;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*3;
    }
    return 0;

}