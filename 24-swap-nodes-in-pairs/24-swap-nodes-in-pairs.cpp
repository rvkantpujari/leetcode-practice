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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode *curr = head;
        int tmp, nodeCnt = 1;
        while(curr->next != nullptr)
        {
            tmp = curr->val;
            curr->val = curr->next->val;
            curr->next->val = tmp;
            if (curr->next->next != nullptr)
                curr = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};