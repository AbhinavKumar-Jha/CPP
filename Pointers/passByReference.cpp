#include<iostream>
using namespace std;
void swap(int * x, int* y){
    int  temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}