#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str="Raghav is a maths teacher. He is a DSA mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // vector print
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}