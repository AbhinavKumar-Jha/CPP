// In this question we have to reverse the second half of the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String :";
    // input even length string
    getline(cin,s);
    int n = s.length();
// // This is for reversing the second half of string and then printing the string
    // reverse(s.begin()+n/2, s.end());
    // cout<<s<<endl;
// // This is for only printing the second half of the string
    cout<<s.substr(n/2);
    return 0;
}