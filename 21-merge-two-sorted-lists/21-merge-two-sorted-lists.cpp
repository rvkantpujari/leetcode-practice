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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if (list1 == NULL)
            return list2;
        
        if (list2 == NULL)
            return list1;

        ListNode *curr, *tmp;
        if (list1->val < list2->val)
        {
            curr = new ListNode(list1->val);
            list1 = list1->next;
        }
        else
        {
            curr = new ListNode(list2->val);
            list2 = list2->next;
        }
        tmp = curr;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                curr->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else
            {
                curr->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            curr = curr->next;
        }

        if (list1 != NULL)
            curr->next = list1;
        else
            curr->next = list2;

        return tmp;
    }
};