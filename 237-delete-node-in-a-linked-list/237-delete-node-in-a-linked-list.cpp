/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* p=node;
        ListNode* pre;
        ListNode* ne=p->next;
        while(p->next!=NULL)
        {
            swap(p->val,ne->val);
            pre=p;
            p=ne;
            ne=p->next;
        }
        pre->next=NULL;
        delete(p);
        
    }
};