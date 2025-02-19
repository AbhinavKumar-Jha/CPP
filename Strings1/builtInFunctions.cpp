#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Abhinav Kumar Jha";
    // cout<<str.size()<<endl; // This doesn't includes \0 (null) .
    // cout<<str.length(); // we can use this also to find the length of the string
    // int len = str.length(); // we can also use this, this is the most useful formula

//     string str = "abcd";
//     cout<<str<<endl;
//     str.push_back('e');
//     str.push_back('f');
//     str.push_back('g');
// //    str.push_back("def"); // We can't use this we can only push char not string
//     cout<<str<<endl;

    string s = "Abhinav";
    cout<<s<<endl;
    s.pop_back(); // it removes the last char 
    s.pop_back();  
    s.pop_back(); 
    cout<<s<<endl;
    return 0;
}