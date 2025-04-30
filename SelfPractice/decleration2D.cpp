#include<iostream>
using namespace std;
int main(){
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // We can also write above as given below, both will act same
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // row -> 3   0-2
    // column -> 3  0-2
    cout<<arr[1][3];
    return 0;
}