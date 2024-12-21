#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1; // 1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    vector<int> v2; // 4 5
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3; // 6 7 8 9 10
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    vector< vector<int> > v;// { {1,2,3}, {4,5}, {6,7,8,9,10}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // cout<<v[0][3]; // Invalid
    cout<<v[2][3];
    return 0;
}