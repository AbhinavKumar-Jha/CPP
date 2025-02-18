#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Abhinav";
    cout<<str<<endl;
    // str[2]='i';
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<endl;
    return 0;
}