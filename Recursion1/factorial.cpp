// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=2;i<=n;i++){
//         f *= i;
//     }
//     return f;
// }
// int main(){
//     cout<<fact(5);
//     return 0;
// }


// // Now factorial of number upto n
// #include<iostream>
// using namespace std;
// void factUpto(int n){
//     for(int j=1;j<=n;j++){
//         int f=1;
//         for(int i=2;i<=j;i++){
//             f *= i;
//         }
//         cout<<f<<endl;
//     }
// }
// int main(){
//     factUpto(5);
//     return 0;

// }


// Now with better time complexity single loop
#include<iostream>
using namespace std;
void factUpto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f *= i;
        cout<<f<<endl;
    }
}
int main(){
    factUpto(5);
    return 0;
}