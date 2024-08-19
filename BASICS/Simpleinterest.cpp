// #include<iostream>
// using namespace std;
// int main(){
//     int p,r,t,si;
//     p=100;
//     r=10;
//     t=2;
//     si=(p*r*t)/100;
//     cout<<si;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int p;
//     cout<<"Enter the principle :";
//     cin>>p;
//     int r;
//     cout<<"Enter the rate :";
//     cin>>r;
//     int t;
//     cout<<"Enter the time duration in Years :";
//     cin>>t;
//     int si;
//     si=(p*r*t)/100;
//     cout<<"The simple interest is :"<<si;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    float p;
    cout<<"Enter the principl :";
    cin>>p;
    float r;
    cout<<"Enter rate :";
    cin>>r;
    float t;
    cout<<"Enter time :";
    cin>>t;
    float si=(p*r*t)/100;
    cout<<si;
}