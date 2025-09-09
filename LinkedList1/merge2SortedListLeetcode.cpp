// // Leetcode 21 (Merge Two Sorted Lists)

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         // SC = O(m+n)
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


// Now better approach or better complexity

