#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Abhinav";
    // cout<<str;
    // cout<<str[0];

    string s;
    // cin>>s; // it works only if given string has no spaces
    getline(cin,s); // it resolves the space issue
    cout<<s;
    return 0;
}