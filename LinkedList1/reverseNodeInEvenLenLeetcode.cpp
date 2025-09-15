// // Leetcode 2074 (Reverse Nodes in Even Length Groups)

// class Solution {
// public:
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         if (!head || !head->next) {
//             return head;
//         }
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* prev = dummy;
//         ListNode* curr = head;
//         int groupNum = 1;
//         while (curr) {
//             ListNode* start = curr;
//             int count = 0;
//             ListNode* end = nullptr;
//             ListNode* temp = curr;
//             while (temp && count < groupNum) {
//                 end = temp;
//                 temp = temp->next;
//                 count++;
//             }
//             if (count % 2 == 0) {
//                 ListNode* reversedHead = reverseList(start, end);
//                 prev->next = reversedHead;
//                 start->next = temp; 
//                 prev = start;
//             } else {
//                 prev = end;
//             }
//             curr = temp;
//             groupNum++;
//         }
//         return dummy->next;
//     }

// private:
//     ListNode* reverseList(ListNode* start, ListNode* end) {
//         ListNode* prev = nullptr;
//         ListNode* curr = start;

//         // Traverse until 'curr' passes 'end'
//         while (prev != end) {
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         return prev;
//     }
// };