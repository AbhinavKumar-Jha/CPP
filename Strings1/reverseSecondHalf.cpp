// In this question we have to reverse the second half of the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    // input even length string
    getline(cin,s);
    int n = s.length();
    reverse(s.begin()+n/2, s.end());
    cout<<s<<endl;
    return 0;
}