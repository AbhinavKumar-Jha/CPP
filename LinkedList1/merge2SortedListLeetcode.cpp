// // Leetcode 21 (Merge Two Sorted Lists)

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         // SC = O(m+n) -> with extra node
//         ListNode* tempA = a; 
//         ListNode* tempB = b; 
//         ListNode* c = new ListNode(100);
//         ListNode* tempC = c;
//         while(tempA!=NULL && tempB!=NULL){
//             if(tempA->val<=tempB->val){
//                 ListNode* t = new ListNode(tempA->val);
//                 tempC->next=t;
//                 tempC=t;
//                 tempA=tempA->next;
//             }
//             else{
//                 ListNode* t = new ListNode(tempB->val);
//                 tempC->next=t;
//                 tempC=t;
//                 tempB=tempB->next;
//             }
//         }   
//         if(tempA != NULL){ 
//             tempC->next = tempA;
//         } else {
//             tempC->next = tempB;
//         }   
//         return c->next;
//     }
// };


// // Now better approach or better complexity

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         // SC = O(1)
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a!=NULL && b!=NULL){
//             if(a->val <= b->val){
//                 temp->next=a;
//                 a=a->next;
//                 temp=temp->next;
//             }
//             else{ // b->val < a->val
//                 temp->next=b;
//                 b=b->next;
//                 temp=temp->next;
//             }
//         }
//         if(a==NULL) temp->next=b;
//         else temp->next=a;
//         return c->next;
//     }
// };