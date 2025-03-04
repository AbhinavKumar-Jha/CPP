#include<iostream>
using namespace std;
void print(int n){
    // we can do this by using loop
    while(n>0){
        cout<<n<<endl;
        n--;
    }
}
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    print(n);
    return 0;
}