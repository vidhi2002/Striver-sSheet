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
        vector<int> before,after;
        ListNode* p=head;
        while(p!=NULL)
        {
            if(p->val<x)
                before.push_back(p->val);
            else
                after.push_back(p->val);
            p=p->next;
        }
        ListNode* q=head;
        for(int i=0;i<before.size();i++)
        {
            q->val=before[i];
            q=q->next;
        }
        for(int i=0;i<after.size();i++)
        {
            q->val=after[i];
            q=q->next;
        }
        return head;
    }
};