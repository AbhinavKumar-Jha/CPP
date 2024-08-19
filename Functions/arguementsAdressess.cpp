#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"Adress of x : "<<&x<<endl;
    cout<<"Adress of y : "<<&y<<endl;
}
int main(){
    int x=3;
    int y=7;
    cout<<"Adress of x : "<<&x<<endl;
    cout<<"Adress of y : "<<&y<<endl;
    fun(x,y);
    return 0;
}