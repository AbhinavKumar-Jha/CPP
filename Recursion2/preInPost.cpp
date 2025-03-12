#include<iostream>
using namespace std;
void pip(int n){
    // pip means Pre In Post
    if(n==0) return;
    cout<<"Pre "<<n<<endl;
    pip(n-1);
    cout<<"In "<<n<<endl;
    pip(n-1);
    cout<<"Post "<<n<<endl;
}
int main(){
    pip(3);
    return 0;
}