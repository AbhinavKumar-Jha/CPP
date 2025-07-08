#include<iostream>
#include<vector>
using namespace std;
// Function to merge two sorted vectors into one sorted result vector
int c=0;
int inversion(vector<int> &a, vector<int> &b){
    int count = 0;
    int i=0; // a
    int j=0; // b
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else{ // a[i]<=b[j]
            i++;
        }
    }
    return count;
}
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i=0; // a
    int j=0; // b
    int k=0; // res
    // Compare elements from both vectors and put smaller one in result
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
        // If vector 'a' is exhausted, copy remaining elements from 'b'
    if(i==a.size()){ // a is at end
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
        // If vector 'b' is exhausted, copy remaining elements from 'a'
    if(j==b.size()){ // b is at end 
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}
// Recursive function to sort vector using divide and conquer approach
void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1) return; // Base Case
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
    // count the inversions
    c += inversion(a,b);
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
    cout<<c;
}