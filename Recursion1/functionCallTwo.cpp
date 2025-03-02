#include<iostream>
using namespace std;
void gun(){
    cout<<"Hello CW"<<endl;
}
void fun(){
    cout<<"Hello PW"<<endl;
    gun();
}
int main(){
    fun();
    return 0;
}
