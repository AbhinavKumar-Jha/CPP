// #include<iostream>
// using namespace std;
// int main(){
//     inn n;
//     cout<<"Enter a number ";
//     cin>>n;
//     if((n%3==0 || n%5==0) && n%15!=0){
//         cout<<"The number is divisible by 3 or 5 but not 15";
//     }
//     return 0;
// }


// second method
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%3==0 || n%5==0){
       if(n%15!=0){
        cout<<"The number is divisible by 5 or 3 but not 15";
       }
       else{
       cout<<"Not matching condition";
       }
    }
    else{
        cout<<"Not matching condition";
    }
    return 0;
}