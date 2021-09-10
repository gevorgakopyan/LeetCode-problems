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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* walker = dummy;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        for(int i = 0; i < left-1; i++)
        {
            walker = curr;
            curr= curr->next;
        }
        for(int i = 0; i< right- left; i++)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        walker->next->next = curr->next;
        curr->next = prev;
        walker->next = curr;
        return dummy->next;
    }
};