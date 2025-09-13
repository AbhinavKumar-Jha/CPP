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
// This is normal display function
void display(Node* head){ // O(1) space
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void displayRev(Node* tail){ // O(1) space
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
// This is display function with recursion
void displayRec(Node* head){ // O(n) space
    if(head==NULL) return ;
    cout<<head->val<<" ";
    displayRec(head->next);
}
// This is reverse display function with recursion
void displayRecRev(Node* head){ // O(n) space
    if(head==NULL) return ;
    displayRecRev(head->next);
    cout<<head->val<<" ";
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
    // displayRec(a);
    // displayRecRev(a);
    displayRev(e);
    return 0;
}