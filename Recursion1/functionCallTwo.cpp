// #include<iostream>
// using namespace std;
// void gun(){
//     cout<<"Hello CW"<<endl;
// }
// void fun(){
//     cout<<"Hello PW"<<endl;
//     gun();
//     return; // Khatam
// }
// int main(){
//     fun();
//     return 0;
// }



#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"Hello PW"<<endl;
    fun(n-1);
}
int main(){
    fun(3);
    return 0;
}