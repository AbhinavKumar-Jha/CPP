// // Leetcode 206 (Reverse Linked List)

// // Bekar Approach (bekar tarikaa, use nahi karna hai)

// class Solution {
// public:
//     ListNode* getNodeAt(ListNode* head, int idx) {
//         ListNode* temp = head;
//         for(int i=1;i<=idx;i++){
//             temp = temp->next;
//         }
//         return temp;
//     }
//     ListNode* reverseList(ListNode* head) {
//         int n=0;
//         ListNode* temp = head;
//         while(temp){
//             cout<<temp->val;
//             temp = temp->next;
//             n++;
//         }
//         int i=0;
//         int j=n-1;
//         while(i<j){
//             ListNode* left = getNodeAt(head,i);
//             ListNode* right = getNodeAt(head,j);
//             int t = left->val;
//             left->val=right->val;
//             right->val=t;
//             i++;
//             j--;
//         }
//         temp = head;
//         while(temp){
//             cout<<temp->val;
//             temp = temp->next;
//         }
//         return head;
//     }
// };