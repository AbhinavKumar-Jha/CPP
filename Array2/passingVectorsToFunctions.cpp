#include<iostream>
#include<vector>
using namespace std;
//void change(vector<int> a){ // This is for pass by value
    void change(vector<int> &a){ // This is for pass by reference
    a[0] = 100; // 
}
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(1);
    v.push_back(9);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}