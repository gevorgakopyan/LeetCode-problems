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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* runner = dummy;
        ListNode* walker = dummy;
        for(int i = 0; i < n; i++)
            runner = runner->next;
        while(runner->next != nullptr)
        {
            runner = runner->next;
            walker = walker->next;
        }
        //delete
        ListNode* remove = walker->next;
		walker->next = remove->next;
		delete remove;
        return dummy->next;
    }
};