#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}