// Leetcode 14 (Longest Common Prefix)
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // strs = ["flower","flow","flight"]
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}