#include<iostream>
#include<iostream>
using namespace std;
int main(){
    string str="Raghav Garg";
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s.push_back(str[i]);
    }
    cout<<s;
    return 0;
}