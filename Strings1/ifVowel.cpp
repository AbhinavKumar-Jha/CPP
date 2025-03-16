#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Abhinav";
    int count = 0;
    int i = 0;
    while(str[i]!='\0'){ // this '\0' denotes that string is ended as it denotes the last of the string
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
        cout<<count;
    return 0;
}