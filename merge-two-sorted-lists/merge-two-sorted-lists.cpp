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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* curr = l3;
        while(l1 != nullptr && l2 != nullptr)
        {
            if(l1->val < l2 ->val)
            {
                curr->next = new ListNode(l1->val);
                curr = curr->next;
                l1= l1->next;
            }
            else{
                curr->next = new ListNode(l2->val);
                curr = curr->next;
                l2= l2->next;
            } 
        }
        if(l1!= nullptr)
            curr->next = l1;
        else 
            curr->next = l2;
        return l3->next;
    }
};