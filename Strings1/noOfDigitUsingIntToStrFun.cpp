// in this question we have to count the number of int without using loops
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x = 12345;
    string s = to_string(x);
    cout<<s.length();
    return 0;
}