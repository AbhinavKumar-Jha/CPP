// #include<iostream>
// using namespace std;
// void print(int n){
//     // we can do this by using loop
//     while(n>0){
//         cout<<n<<endl;
//         n--;
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
void print(int n){
    if(n==0) return; // base case
    cout<<n<<endl; // kaam
    print(n-1); // call
}
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    print(n);
    return 0;
}