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
    ListNode* partition(ListNode* head, int x) {
        ListNode* list1 = new ListNode(0);
        ListNode* runner1 = list1;
        ListNode* list2 = new ListNode(0);
        ListNode* runner2 = list2;
        
        while(head!=nullptr)
        {
            if(head->val < x)
            {
                runner1->next = head;
                runner1 = runner1->next;
            }else
            {
                runner2->next = head;
                runner2 = runner2->next;
            }
            head = head->next;
        }
        runner2->next = nullptr;
        runner1->next = list2->next;
        return list1->next;
    }
};