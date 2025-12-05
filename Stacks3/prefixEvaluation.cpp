#include<iostream>
#include<stack>
using namespace std;
int solve(int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "-/*+79483"; // prefix expression
    // we need one stack -> values
    stack<int> val;
    for(int i=s.length();i>=0;i--){ // reverse
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){ // digit
            val.push(s[i]-48);
        }
        else{ // s[i] it is -> *, /, +, -
            // kaam
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1,val2,s[i]);
            val.push(ans);   
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
    return 0;
}