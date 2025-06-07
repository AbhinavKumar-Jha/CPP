#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i=0; // a
    int j=0; // b
    int k=0; // res
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()){ // a is at end
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    if(j==b.size()){ // b is at end 
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1) return;
    int n1 = n/2, n2 = n-n/2;
    vector<int> a(n1), b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // now magic aka recursion
    mergeSort(a);
    mergeSort(b);
    // now merge
    merge(a,b,v);
    a.clear(); // it reduces space complexity by deleting unused vector
    b.clear();
}
int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}