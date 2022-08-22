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
    int getDecimalValue(ListNode* head) {
        string s="";
        ListNode* p=head;
        while(p!=NULL)
        {
            s+=to_string(p->val);
            p=p->next;
        }
        reverse(s.begin(),s.end());
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int r=0;
            if(s[i]=='1')
                    r=1;
            ans+=r*pow(2,i);
        }
        return ans;
    }
};