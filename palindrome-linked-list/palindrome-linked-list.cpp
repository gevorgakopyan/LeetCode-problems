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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr) return true;
        
        ListNode* first_half = split(head);
        ListNode* second_half = reverseLinkedList(first_half->next);
        
        while(second_half!= nullptr)
        {
            if(head->val != second_half -> val) return false;
            head= head->next;
            second_half= second_half -> next;
        }
        
        
        return true;
    }
    ListNode* split(ListNode* head)
    {
        ListNode* runner = head;
        ListNode* walker = head;
        while(runner->next != nullptr && runner->next->next != nullptr)
        {
            walker = walker->next;
            runner = runner -> next -> next;
        }
        return walker;
    }
    ListNode* reverseLinkedList(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        while(curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
        return prev;
    }
};