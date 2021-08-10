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
    ListNode* middleNode(ListNode* head) {
        ListNode* counter = head;
        int count = 0;
        while(counter->next != nullptr)
        {
            counter = counter->next;
            count++;
        }
        counter=head;
        count = (count%2 == 0 ? count/2 : (count/2)+1);
        for(int i=0; i< count; i++)
            counter = counter->next;
        return counter;
    }
};