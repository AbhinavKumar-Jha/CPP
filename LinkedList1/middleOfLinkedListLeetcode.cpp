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


// // What interviewer wants -> To solve this in one pass

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         // Now Second method -> in one pass
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=NULL && fast->next!=NULL){ 
//             slow = slow->next;
//             fast=fast->next->next;
//         } 
//         return slow;
//     }
// };