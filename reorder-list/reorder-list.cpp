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
    void reorderList(ListNode* head) {
        
        ListNode* l1 = split(head);
        ListNode* l2 = reverse(l1->next);
        l1->next = nullptr;
        ListNode* curr =head;
        
        while(l2 != nullptr && curr != nullptr)
        {
            ListNode *tmp = curr->next;
            curr->next = l2;
            curr = tmp;
            
            tmp = l2->next;
            l2->next = curr;
            l2 = tmp;

        }
    }
    ListNode* split(ListNode* head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        while(curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};