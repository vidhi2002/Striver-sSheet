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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return list1;
        else if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        vector<int> v;
        ListNode* p=list1;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
        }
        ListNode* q=list2;
        while(q!=NULL)
        {
            v.push_back(q->val);
            q=q->next;
        }
        sort(v.begin(),v.end());
        ListNode *head=new ListNode(v[0]);
        head->next=NULL;
        ListNode *h=head;
        for(int i=1;i<v.size();i++)
        {
            ListNode *p=new ListNode(v[i]);
            h->next=p;
            h=h->next;
            
        }
        h->next=NULL;
        return head;
    }
};