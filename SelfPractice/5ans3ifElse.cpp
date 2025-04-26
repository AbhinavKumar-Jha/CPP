// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     if(n%3==0 && n%5==0){
//         cout<<"Divisible by both";
//     }
//     else{
//         cout<<"Not divisible ";
//     }
//     return 0;
// }

// // Second method
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     if(n%3==0){
//         if(n%5==0){
//         cout<<"Divisible by both";
//         }
//         else{
//         cout<<"Not matching condition";
//         }
//     }
//     else{
//     cout<<"Not matching condition";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"Divisible by both";
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