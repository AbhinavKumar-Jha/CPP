// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;
//     if(n>99 && n<1000){
//         cout<<"It is a three digit number ";
//     }
//     else{
//         cout<<"It is not a three digit number ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"It is a three digit number";
    }
    else{
        cout<<"It is not a three digit number";
    }
    return 0;
}