// // Leetcode 430 (Flatten a Multilevel Doubly Linked List)

// class Solution {
// public:
//     Node* flatten(Node* head) {
//         Node* temp = head;
//         while(temp!=NULL){
//             Node* a = temp->next;
//             if(temp->child!=NULL){

//                 Node* c = temp->child;
//                 temp->child = NULL; // V IMP
//                 c = flatten(c); // recursion
//                 temp->next = c;
//                 c->prev = temp;
//                 while(c->next!=NULL){
//                     c = c->next;
//                 }
//                 c->next = a;
//                 if(a) a->prev = c;
//             }
//             temp = a;
//         }
//         return head;
//     }
// };