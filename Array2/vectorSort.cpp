#include<iostream>
#include<vector>
#include<algorithm> // Include this header for sort function
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(1);
    v.push_back(9);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    // Sort
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}