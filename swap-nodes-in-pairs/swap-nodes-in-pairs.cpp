/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        while(curr->next != nullptr && curr->next->next != nullptr)
        {
            ListNode* swap1 = curr->next;
            ListNode* swap2 = curr->next->next;
            swap1->next = swap2->next;
            swap2->next = swap1;
            curr->next = swap2;
            curr = curr ->next ->next;
        }
        return dummy->next;
    }
};