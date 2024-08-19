#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    // AP is 1,3,5,7,9,11.......upto n
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }

    // using 2nd method
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=2;
    }
    return 0;
}