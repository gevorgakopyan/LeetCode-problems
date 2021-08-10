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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = head;
        
        while(curr!= nullptr && curr->next != nullptr)
        {
            if(curr->next->val == val)
            {
                curr->next = curr->next->next;
            }
            else
             curr = curr->next;
        }
        while(head != nullptr && head->val == val)
        {
            if(head->next== nullptr && head->val == val)
            {
                head = nullptr;
                break;
            }
            head=head->next;     
        }
        return head;
    }
};