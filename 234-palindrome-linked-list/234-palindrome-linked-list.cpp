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
    bool isPalindrome(ListNode* head) {
        vector<int> s,r;
        while(head->next!=NULL)
        {
            s.push_back(head->val);
            head=head->next;
        }
        s.push_back(head->val);
        r=s;
        reverse(r.begin(),r.end());
        if(r==s)
            return true;
        else
            return false;
        
    }
};