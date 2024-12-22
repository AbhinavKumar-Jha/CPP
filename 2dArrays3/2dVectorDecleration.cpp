#include<iostream>
#include<vector>
using namespace std;
int  main(){
    // vector<int> v1(5,2);
    // int arr[3][4];
    vector< vector<int> > v(3,vector<int>(4,2));
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl; // For finding number of rows in Vector
    cout<<v[0].size()<<endl; // For finding number of columns in Vector
    return 0;
}