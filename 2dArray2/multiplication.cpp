#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows of 1st matrix :";
    cin>>m;
    int n;
    cout<<"Enter the columns of 1st matrix :";
    cin>>n;
    int p;
    cout<<"Enter the row of 2nd matrix :";
    cin>>p;
    int q;
    cout<<"Enter the columns of 2nd matrix :";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter the elements of 1st matrix :";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        int b[p][q];
        cout<<"Enter the elements of 2nd matrix :";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        // resultant matrix
        // res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+...(upto n or p)
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        // Print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{ // n!=p
    cout<<"The matrices can not be multiplied";
    }
    return 0;
}