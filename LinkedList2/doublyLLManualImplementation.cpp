#include<iostream>
using namespace std;
class Node{ // Doubly LL Node
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    // 10 20 30 40 50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    // This is for pointing every node to next node
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // e->next = NULL; // By default it is assigned NULL no need to add this
    // This is for pointing every node to prrevious one
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    // a->prev = NULL; // By default it is assigned NULL no need to add this
    display(a);
    return 0;
}