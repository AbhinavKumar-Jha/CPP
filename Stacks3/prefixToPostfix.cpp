#include<iostream>
#include<stack>
#include<string>
using namespace std;
string solve(string val1, string val2, int ch){
    // Pre to Post
    // Postfix is : v1 v2 op
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
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