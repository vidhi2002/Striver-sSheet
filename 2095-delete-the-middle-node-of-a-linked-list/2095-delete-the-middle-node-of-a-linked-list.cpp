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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return head;
        int n=0;
        ListNode* p=head;
        while(p!=NULL)
        {
            p=p->next;
            n++;
        }
        if(n==1)
        {
            ListNode* p=head;
            head=p->next;
            p->next=NULL;
            delete(p);
            return head;
        }
        int r=0;
        ListNode*pre;
        ListNode* cur=head;
        ListNode* pos=cur->next;
        while(r<n/2)
        {
            pre=cur;
            cur=cur->next;
            pos=cur->next;
            r++;
        }
        pre->next=pos;
        delete(cur);
        return head;
        
    }
};