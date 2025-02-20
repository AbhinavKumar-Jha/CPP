// stoi means string to int and stoll means string to long long
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ="123456";
    int x = stoi(str);
    cout<<x<<endl;

    string s ="1234567891234";
    int a = stoll(s);
    cout<<a;
    return 0;
}