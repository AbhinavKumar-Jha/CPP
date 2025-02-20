// // Bekar tarika because time complexity jyada hai
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "abhinav";
//     int max = 0;
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(max<count) max = count;
//     }

//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(count==max){
//             cout<<ch<<" "<<max<<endl;
//         }
//     }
//     return 0;
// }


// ab optimized tarika se solve karna hai
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int max = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii = i+97;
            char ch = (int)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
    return 0;
}