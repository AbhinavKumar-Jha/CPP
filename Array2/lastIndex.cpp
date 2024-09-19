#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
    v.push_back(0);
    v.push_back(8);
    v.push_back(6);
    v.push_back(2);

    int x = 6;
    int idx = -1;
    // for(int i=0;i<v.size();i++){ // Forward Loop
    //     if(v[i]==x) idx = i;
    // }

    for(int i=v.size()-1;i>=0;i--){ // Back loop, it is the fastest method
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;
    return 0;
    
}