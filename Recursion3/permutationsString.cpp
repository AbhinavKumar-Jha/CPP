#include<iostream>
#include<string>
using namespace std;
void permutation(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){
    string str="abc";
    permutation("",str);
    // c ka idx hai 2, string len=5 (0-4)
    // string left=str.substr(0,2);
    // cout<<left<<endl;
    // string right=str.substr(2+1);
    // cout<<right<<endl;
    return 0;
}