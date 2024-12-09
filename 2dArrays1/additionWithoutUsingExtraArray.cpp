#include<iostream>
using namespace std;
int main(){
    int a[2][3]={10,12,14,16,18,20};
    int b[2][3]={10,12,14,16,18,20};
    // a
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //b
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // b ke andar a add karna hai
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            b[i][j] += a[i][j];
        }
    }
    // ab b change hone ke baad or update hone ke baad
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}