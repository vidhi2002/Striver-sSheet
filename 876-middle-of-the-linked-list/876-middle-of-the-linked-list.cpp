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
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        ListNode* ans=head;
            
            int r=count/2;
            while(r>0)
            {
                ans=ans->next;
                r--;
            }
        
        return ans;
        
    }
};