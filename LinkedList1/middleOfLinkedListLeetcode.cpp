// // Leetcode 876 (Middle of the Linked List)

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int len=0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             len++;
//             temp=temp->next;
//         }
//         int midIdx = len/2;
//         ListNode* mid = head;
//         for(int i=0;i<midIdx;i++){
//             mid = mid->next;
//         }
//         return mid;
//     }
// };