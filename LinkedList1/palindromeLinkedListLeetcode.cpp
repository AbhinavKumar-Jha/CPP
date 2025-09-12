// // Leetcode 234 (Palindrome Linked List)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head;
//         while(curr){
//             Next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=Next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         ListNode* c =new ListNode(10);
//         // deep copy of head
//         ListNode* temp = head;
//         ListNode* tempC = c;
//         while(temp){ // O(n)
//             ListNode* node = new ListNode(temp->val);
//             tempC->next = node;
//             temp = temp->next;
//             tempC = tempC->next;
//         }
//         c = c->next;
//         c = reverseList(c);
//         ListNode* a = head;
//         ListNode* b = c;
//         while(a){
//             if(a->val != b->val) return false;
//             a = a->next;
//             b = b->next;
//         }
//         return true;
//     }
// };