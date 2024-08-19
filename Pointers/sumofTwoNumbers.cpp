// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     int y = 9;
//     int* p1 = &x;
//     int* p2 = &y;
//     cout<<*p1 + *p2;
//     return 0;
// }

// Now using input

#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter the first number :";
    cin>>*p1;
    cout<<"Enter the second number :";
    cin>>*p2;
   // cout<<*p1 + *p2;
   cout<<x + y;
}