#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//  // This is for finding the length of the string

    // string str = "Abhinav Kumar Jha";
    // cout<<str.size()<<endl; // This doesn't includes \0 (null) .
    // cout<<str.length(); // we can use this also to find the length of the string
    // int len = str.length(); // we can also use this, this is the most useful formula

// // This is for pushing char in string

//     string str = "abcd";
//     cout<<str<<endl;
//     str.push_back('e');
//     str.push_back('f');
//     str.push_back('g');
// //    str.push_back("def"); // We can't use this we can only push char not string
//     cout<<str<<endl;

// // This is for removing last char from string

    // string s = "Abhinav";
    // cout<<s<<endl;
    // s.pop_back(); // it removes the last char 
    // s.pop_back();  
    // s.pop_back(); 
    // cout<<s<<endl;

// // This is used to add the two strings or char 

    // string s = "Abhinav";
    // cout<<s<<endl;
    // string t = "Jha";
    // s = s + t; // + is used here to add two strings 
    // cout<<s<<endl;
    // s = "xyz" + s;
    // cout<<s<<endl;

// // This is used to reverse the entire string

    string s = "Abhinav"; // index is 0 1 2 3 4 5 6 of Abhinav
    cout<<s<<endl;
    // reverse(s.begin(), s.end()); // so we can reverse some part of the string also by their index number 
    // cout<<s<<endl;
    // reverse(s.begin()+4, s.end()-1);
    reverse(s.begin()+2, s.begin()+5); // this is used when we want to reverse in the middle of the string just like give the starting and last + 1 then the middle string gets reversed.
    cout<<s<<endl; 
    // reverse(s.begin()+4, s.end());
    // cout<<s<<endl;
    return 0;
}