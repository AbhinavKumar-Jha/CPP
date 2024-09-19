#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

// for printing or updating we use At also
    cout<<v[2]<<endl; // This is normal method
    cout<<v.at(2)<<endl;  // This is at method
    v.at(3)=5;
    cout<<v.at(3);
    return 0;
}