// Adress are continous

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
// }



#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    cout<<arr[2]<<endl;
    cout<<arr; // we can also print the adress of the array normally without using & sign
}

