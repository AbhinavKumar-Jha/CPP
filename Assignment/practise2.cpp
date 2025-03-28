// Leetcode 22(Generate Parentheses)
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generate(string s, int open, int close, int n){
    // Base Case
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) generate(s+'(',open+1,close,n);
    if(close<open) generate(s+')',open,close+1,n);
}
int main(){
    int n = 3;
    generate("",0,0,n);
    return 0;
}