#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row number :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j+=2){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
    return 0;
}