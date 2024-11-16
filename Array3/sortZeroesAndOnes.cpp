#include<iostream>
#include<vector>
using  namespace std;
void sort01(vector<int>& v){
    int n = v.size();
    int noz = 0 ; // noz means number of zero
    int noo = 0; // noo means number of ones
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    // filling element
    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1; 
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}