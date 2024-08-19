// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact =1;
//     for(int i=2;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter the number of n :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<fact(i)<<endl;
//     }
//     return 0;
// }


// Second Method

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of n :";
    cin>>n;
    int fact =1;
    for(int i=1;i<=n;i++){
       fact *= i;
       cout<<fact<<endl;
    }
    return 0;
}