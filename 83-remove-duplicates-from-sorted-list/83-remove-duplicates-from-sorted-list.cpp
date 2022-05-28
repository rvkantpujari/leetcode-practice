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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        // if there is no node OR
        // if there is only one node OR
        if(head == NULL || head->next == NULL)
            return head;
        
        // if there are only two nodes but duplicate
        if(head->next->next == NULL && head->val == head->next->val)
        {
            head->next = NULL;
            return head;
        }
        
        ListNode *t = head;
        
        // if linked list has more than 2 nodes
        while(t->next != NULL)
        {
            if(t->val == t->next->val)
                t->next = t->next->next;
            else
                t = t->next;
        }
        return head;
    }
};