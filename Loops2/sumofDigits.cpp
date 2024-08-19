#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number :";
cin>>n;
int ld; // ld --> last digit
int sum=0;
while(n>0){
    ld=n%10;
    sum+=ld;
    n/=10;
}
cout<<sum;
return 0;
}