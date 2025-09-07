// // Leetcode 19 (Remove Nth Node From End of ListLeet)

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int len = 0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             len++;
//             temp = temp->next;
//         }
//         if(n==len){
//             head=head->next;
//             return head;
//         }
//         int m = len-n+1;
//         int idx = m-1;
//         temp=head;
//         for(int i=0;i<idx-1;i++){
//             temp = temp->next;
//         }
//         temp->next=temp->next->next; 
//         return head;
//     }
// };

// // What interviewer wants -> To solve this in one pass

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         // traverse fast to (n+1) loops
//         for(int i=1;i<=n+1;i++){
//             if(fast==NULL) return head->next;
//             fast=fast->next;   
//         }
//         // move slow and fast at same pace
//         while(fast!=NULL){
//             slow = slow->next;
//             fast = fast->next;
//         }
//         // now the slow is exactly at left of the nth node from end
//         slow->next=slow->next->next;
//         return head;
//     }
// };