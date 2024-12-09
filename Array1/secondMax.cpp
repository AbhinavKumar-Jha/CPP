#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elments of the array :";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
     
    int Smax = INT_MIN; // Smax --> second maximum
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && Smax<arr[i]) Smax = arr[i];
    }
    cout<<"The maximum value is :"<<max<<endl;
    cout<<"The second largest number is "<<Smax;
    return 0;
}
   