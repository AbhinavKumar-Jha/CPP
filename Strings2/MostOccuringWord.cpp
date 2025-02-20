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
   
    cout<<endl;
    sort(v.begin(), v.end());
    int maxCount=1;
    int count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxCount=max(maxCount,count);
    }
    
    count = 1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }
    return 0;
}