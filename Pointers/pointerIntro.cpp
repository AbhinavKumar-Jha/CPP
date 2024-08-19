#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* p = &x;

    cout<<&x<<endl;
    cout<<p;
    return 0;
}