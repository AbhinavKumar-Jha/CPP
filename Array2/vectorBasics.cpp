// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(6);
//     v.push_back(1);
//     v.push_back(9);
//     v.push_back(0);

//     cout<<v[0]<<" ";
//     cout<<v[1]<<" ";
//     cout<<v[2]<<" ";
//     cout<<v[3]<<" ";
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 v.push_back(5);
 //cout<<v.size()<<endl; // v.size() --> is for finding the size of the vector
 cout<<v.capacity()<<endl; // v.capacity() --> is for finding capacity of the vector
 v.push_back(4);
 //cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;
 v.push_back(3);
 //cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;
 v.push_back(2);
 //cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;

//  cout<<v[0]<<" ";   
//  cout<<v[1]<<" ";  
//  cout<<v[2]<<" ";  
//  cout<<v[3]<<" ";  
    return 0;
}