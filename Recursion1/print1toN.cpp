// #include<iostream>
// using namespace std;
// void print(int n){
//     // we can do this by using loop
//     int i=1;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter any number :";
//     cin>>n;
//     print(n);
//     return 0;
// }

// But we want to do this question by using recursion
#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n) return; // base case
    cout<<i<<endl; // kaam
    print(i+1,n); // call
}
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    print(1,n);
    return 0;
}