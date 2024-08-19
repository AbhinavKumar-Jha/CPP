#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    int m=n-1; // new lines
    int nsp=1;
    for(int i=1;i<=m;i++){
       // numbers
       int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        // space
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
         // numbers
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}