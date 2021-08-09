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
        //create dummy
        dummy->next = head;
        ListNode* runner = dummy;
        ListNode* walker = dummy;
        //keep runner n ahead
        for(int i = 0; i < n; i++)
            runner = runner->next;
        //move until you reach n-1
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