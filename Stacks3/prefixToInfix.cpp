#include<iostream>
#include<stack>
#include<string>
using namespace std;
string solve(string val1, string val2, int ch){
    // Pre to In
    // Infix is : v1 op v2
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}
int main(){
    string s = "-/*+79483"; // prefix expression
    // we need one stack -> values
    stack<string> val;
    for(int i=s.length();i>=0;i--){ // reverse
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else{ // s[i] it is -> *, /, +, -
            // kaam
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);   
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
    return 0;
}