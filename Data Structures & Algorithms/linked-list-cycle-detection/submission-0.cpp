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
    bool hasCycle(ListNode* head) {
        if(head==nullptr)
            return 0;
        unordered_map<ListNode*,bool> mp;
        while(head)
        {
            if(mp[head]==0)
            {
                mp[head]=1;
            }
            else
            {
                return 1;
            }
            head=head->next;
        }
        return 0;
    }
};
