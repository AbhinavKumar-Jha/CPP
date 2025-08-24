#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x = INT_MAX;
    cout<<x%5<<endl;
    cout<<(x%5 * 13%5)<<endl;
    return 0;
}