#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "name";
// sort fun ASCII value ke order me sort kar deta hai
    sort(s.begin(),s.end());
    cout<<s;
    return 0;

}