#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    // push
    // pop
    // fron -> top
    // size, empty
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front();
    return 0;
}