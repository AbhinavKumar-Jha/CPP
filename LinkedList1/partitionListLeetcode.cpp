// // Leetcode 86 (Partition List)

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* lo = new ListNode(200);
//         ListNode* hi = new ListNode(200);
//         ListNode* tempLo = lo;
//         ListNode* tempHi = hi;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(temp->val<x){
//                 tempLo->next = temp;
//                 temp = temp->next;
//                 tempLo = tempLo->next;
//             }
//             else{ // temp->val >=x
//                 tempHi->next = temp;
//                 temp = temp->next;
//                 tempHi = tempHi->next;
//             }
//         }
//         tempLo->next = hi->next;
//         tempHi->next = NULL;
//         return lo->next;
//     }
// };