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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* walker = head;
        ListNode* runner = head;
        while (runner != nullptr && runner->next != nullptr)
        {
            runner = runner->next;
            if(walker->val == runner->val)
            {
                walker->next= walker->next->next;
                runner = walker;
            }
            if(runner>walker)
            {
               walker= walker->next;
            }    
            
        }
        return dummy->next;
    }
};