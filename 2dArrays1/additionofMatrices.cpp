#include<iostream>
using namespace std;
int main(){
    int a[2][3]={10,12,15,18,19,20};
    int b[2][3]={10,12,15,18,19,20};
    int res[2][3];
    // Addition
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            res[i][j]=a[i][j]+b[i][j];
        }
    }
    // print
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}