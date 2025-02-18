#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Abhinav Kumar Jha";
    cout<<str.size()<<endl; // This doesn't includes \0 (null) .
    cout<<str.length(); // we can use this also to find the length of the string
    int len = str.length(); // we can also use this 
    return 0;
}