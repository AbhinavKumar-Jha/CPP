#include<iostream>
#include<stack>
#include<vector> 
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Previous Greater Element Array
    int pge[n];
    // Using a Stack : pop,ans,push & forward traverse
    // SC = O(n), TC = O(n)
    stack<int> st;
    pge[0]= -1;
    st.push(arr[0]);
    for(int i=1;i<=n-1;i++){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        // push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
    return 0;
}

