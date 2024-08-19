#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students :";
    cin>>n;
    int marks[n]; // 0 to n-1 students
    cout<<"Enter the marks :"<<endl;
    // User Input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    // Output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<"Roll number "<<i <<" is less than 35"<<endl;
        }
    }
    return 0;

}