#include<iostream>
#include<vector>
using namespace std;
vector<long long int> factorial(int n){
    vector<long long int> fact(n+1, 1);
    int MOD = 1000000007;
    for(int i=2;i<=n;i++){
        fact[i]=((i%MOD) * (fact[i-1]) % MOD);
    }
    return fact;
}
int main(){
    vector<long long int> res = factorial(25);
    for(int i=0;i<res.size();i++){
        cout<<i<<" ! =" <<res[i]<<endl;
    }
    return 0;
}