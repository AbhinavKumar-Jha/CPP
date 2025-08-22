#include<iostream>
int count_set_bits(int n){
    return __builtin_popcount(n);
}
int count_set_bits2(int n){
    int count = 0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
using namespace std;
int main(){
    cout<<count_set_bits(13)<<endl;
    cout<<count_set_bits2(64)<<endl;
    return 0;
}