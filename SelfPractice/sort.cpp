#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end()); // For Ascending Order or Increasing Order (T C - O(nlogn))
    reverse(v.begin(), v.end());  // For Descending Order or Decreasing Order
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}