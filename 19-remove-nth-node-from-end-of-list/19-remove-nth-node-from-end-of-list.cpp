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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1)
        {
            head=NULL;
            return head;
        }
            
        ListNode* p=head;
        int count =0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        if(count==n)
        {
            ListNode* j=head;
            head=head->next;
            j->next=NULL;
            delete(j);
            return head;
        }
        int r=count-n;
        ListNode* a=NULL;
        ListNode* b=head;
        ListNode* c=b->next;
        while(r>0)
        {
            a=b;
            b=c;
            c=b->next;
            r--;
        }
        a->next=c;
        delete(b);
        return head;
    }
};