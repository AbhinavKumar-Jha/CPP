// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    reverse(s.begin()+1, s.begin()+5);
    cout<<s<<endl;
    return 0;
}