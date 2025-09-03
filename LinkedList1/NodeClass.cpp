#include<iostream>
using namespace std;
class Node{ // Linked List node
public:
    int val;
    Node* next;
    Node(int val){ // Constructor
        // val=v(if we write int v in constructor)
        this->val=val; // Otherwise this
        this->next=NULL;
    }
};
int main(){
    // Node a;
    // a.val=10;
    // Node b;
    // b.val=20;
    // Node c;
    // c.val=30;
    // Node d;
    // d.val=40;

    // after using constructor we can do like this
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // cout<<&a<<endl;
    // cout<<a.next;
    // forming linked list
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // d.next=NULL;  // no need to do this as we have already done NULL in all in constructor
    // Node* ptr = &b;
    // cout<<b.val;
    // a.next -> val = 70;
    // cout<<b.val;
    // cout<<(a.next)->val;

    // print karani hai d ki value
    // (*(*(a.next).next).next).val;
    // cout<<(*((*((*(a.next)).next)).next)).val;
    cout<<(((a.next)->next)->next)->val;
    return 0;
}