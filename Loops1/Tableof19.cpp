// // WAP to print table of 19
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=19;i<=190;i=i+19){
//         cout<<i<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    for(int i=19;i<=190;i++){
        if(i%19==0){
            cout<<i<<endl;
        }
        
    }
    return 0;
}

