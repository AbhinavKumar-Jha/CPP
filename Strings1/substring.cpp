#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    // s.substr(idx,len) // idx ka matlab hai index and len ka matlab hai ki idx se kitna aage tak ka print karna hai
    cout<<s.substr(1,3);
    return 0;
}