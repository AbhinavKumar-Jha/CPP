#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
// We have to take even lenth of string and then reverse the first half of the string
    string s;
    getline(cin,s);
    // Reverse First Half
    int n = s.length(); // For finding Length
    reverse(s.begin(), s.begin()+n/2);
    cout<<s<<endl;
    return 0;
}