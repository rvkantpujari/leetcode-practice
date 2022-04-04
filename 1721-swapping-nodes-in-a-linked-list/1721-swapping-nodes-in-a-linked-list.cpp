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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode *pos = head;
        
        while(--k) // Look for kth node from beginning
            pos = pos->next;
        
        ListNode *beg = pos, *end = head;
        
        while(pos->next) // Look for kth node from end
        {
            pos = pos->next;
            end = end->next;
        }
        
        swap(beg->val, end->val); // swap both node values
        
        return head;
    }
};