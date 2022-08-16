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
ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp=head;
        int sum=0;
        int coun=1;
        ListNode* tmp1=head;
        while(tmp->next!=NULL){
           tmp=tmp->next;
            while(tmp->val!=0){
            sum=sum+tmp->val;
            tmp=tmp->next;
            }
            coun++;
             tmp1->val=sum ;
            tmp1=tmp1->next;
            sum=0;
        }
        ListNode* t=head;
        
        while(coun!=2){
            t=t->next;
            coun--;
        }
        t->next=NULL;
        return head;
    }
};