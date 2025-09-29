// Problem: LeetCode 206 - Reverse Linked List
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Iterative using three pointers (Prev, Curr, Next)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* Prev = NULL;
        ListNode* Curr = head;
        ListNode* Next = NULL;
        while (Curr != NULL) {
            Next = Curr->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Next;
        }
        return Prev;
    }
};

