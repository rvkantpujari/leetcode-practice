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
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode *t1 = head->next, *t2;
        ListNode *root = new ListNode(head->val);
        
        while(t1 != NULL)
        {
            t2 = new ListNode(t1->val);
            t2->next = root;
            root = t2;
            t1 = t1->next;
        }
        return root;
    }
};