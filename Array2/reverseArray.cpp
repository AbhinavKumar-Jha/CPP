#include<iostream>
#include<vector>
#include<algorithm> // include this header for reverse 
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    display(v);
    // Reverse using two pointers
// This method is using while loop
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     // Swap v[i] and v[j]
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
// Now using for loop
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    // int temp=v[i];
    // v[i]=v[j];
    // v[j]=temp;
    // }

// Vector has some built in functions to reverse the vector/array
    reverse(v.begin(), v.end());
    display(v);
    return 0;
}