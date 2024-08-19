// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of a :";
//     cin>>a;
//     int b;
//     cout<<"Enter the number of b :";
//     cin>>b;
//     int c;
//     cout<<"Enter the number of c : ";
//     cin>>c;
//     if(a+b>c && b+c>a && a+c>b){
//        // cout<<"These are the sides of a triangle";
//          cout<<a<<","<<b<<","<<c<< can be the sides of a triangle;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of a :";
    cin>>a;
    int b;
    cout<<"Enter the number of b :";
    cin>>b;
    int c;
    cout<<"Enter the number of c : ";
    cin>>c;
    if(a+b>c){
        if(b+c>a){
            if(a+c>b){
                cout<<"This is a triangle";
            }
        }
    }
    else{
        cout<<"This is not a triangle";
        }
    return 0;
}