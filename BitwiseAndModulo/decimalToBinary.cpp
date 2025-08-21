#include<iostream>
#include<string>
using namespace std;
string decimal_to_binary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){
            // even
            result="0"+result;
        }
        else {
            // odd
            result="1"+result;
        }
        num=num/2;
    }
    return result;
}
int main(){
    string str = "001011";
    cout<<decimal_to_binary(13)<<endl;
    return 0;
}