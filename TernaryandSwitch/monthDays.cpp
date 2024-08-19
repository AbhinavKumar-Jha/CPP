// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter month number :";
//     cin>>n;
//     switch(n){
//         case 1:
//             cout<<"31"; // Jan
//             break;
//         case 2:
//             cout<<"28"; // Feb
//             break;
//         case 3:
//             cout<<"31"; // Mar
//             break;
//         case 4:
//             cout<<"30"; // Apr
//             break;
//         case 5:
//             cout<<"31"; // May
//             break;
//         case 6:
//             cout<<"30"; // Jun
//             break;
//         case 7:
//             cout<<"31"; // Jul
//             break;
//         case 8:
//             cout<<"31"; // Aug
//             break;
//         case 9:
//             cout<<"30"; // Sep
//             break;
//         case 10:
//             cout<<"31"; // Oct
//             break;
//         case 11:
//             cout<<"30"; // Nov
//             break;
//         case 12:
//             cout<<"31"; // Dec
//             break;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the month number :";
    cin>>n;
    switch(n){
        case 1:
            cout<<"31";
            break;
        case 2:
            cout<<"28";
            break;
    }
    return 0;

}