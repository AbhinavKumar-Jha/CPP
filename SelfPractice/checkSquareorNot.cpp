// Take values of length and breadth of a rectangle from user and check if it is square or not
#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length :";
    cin>>length;
    int breadth;
    cout<<"Enter the breadth :";
    cin>>breadth;
    if(length==breadth){
        cout<<"This is a square ";
    }
    else{
        cout<<"This is not a square ";
    }
    return 0;
}