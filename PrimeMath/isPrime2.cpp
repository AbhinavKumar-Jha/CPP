// #include<iostream>
// #include<cmath>
// using namespace std;
// int fac=0;
// bool isPrime(int n){
//     if(n==1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             fac=i;
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     cout<<isPrime(1001)<<endl;
//     cout<<fac;
//     return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<isPrime(1001)<<endl;
    return 0;
}