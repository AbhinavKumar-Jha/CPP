#include<iostream>
using namespace std;
int main(){
    int a[2][3]={10,12,14,16,18,20};
    int b[2][3]={10,12,14,16,18,20};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}