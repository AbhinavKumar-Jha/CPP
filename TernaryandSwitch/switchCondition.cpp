#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the month number :";
    cin>>n;
    switch((n<=7 && n%2!=0) || (n>=8 && n%2==0)){
        case 1:
        cout<<"31";
    }
    switch(n==4 || n==6 || n==9 || n==11){
        case 1:
        cout<<"30";
    }
    switch(n){
        case 2:
        cout<<"28";
    }
    return 0;
}