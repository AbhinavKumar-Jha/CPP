#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
//  // We can take input of strings also
    string str;
    getline(cin,str);
    // string str = "raghav is a coding teacher";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}