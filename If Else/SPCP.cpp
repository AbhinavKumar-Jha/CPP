#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the cost price :";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price :";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    if(cp>sp){
        cout<<"Loss = "<<cp-sp;
    }
    if(sp==cp){
        cout<<"No Profit, No Loss!";
    }
    return 0;
}

