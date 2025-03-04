#include<iostream>
using namespace std;
void print(int n){
    // we can do this by using loop
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    print(n);
    return 0;
}

