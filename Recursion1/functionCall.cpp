#include<iostream>
using namespace std;
void greet(){
    cout<<"Good morning"<<endl;
    cout<<"How are you?"<<endl;
}
int product(int a, int b){
    return a*b;
}
int main(){
    // int x = product(2,4);
    // cout<<x<<endl;
    // greet();
    // // 
    // //
    // greet();
    int a=6;
    int b=8;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}