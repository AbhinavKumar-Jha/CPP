// #include<iostream>
// using namespace std;
// // Global variable
// int n = 3;
// void generate(string s){
//     if(s.length()==n){
//         cout<<s<<endl;
//         return;
//     }
//     generate(s+'0');
//     generate(s+'1');
// }
// int main(){
//     generate("");
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
void generate(string s, int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n-1);
    generate(s+'1',n-1);
}
int main(){
    int n=3;
    generate("",n);
    return 0;
}