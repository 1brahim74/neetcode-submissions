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
        unordered_set<ListNode*> mp;
        while(head)
        {
            if(mp.find(head)!=mp.end())
                return 1;
            mp.insert(head);
            head=head->next;
        }
        return 0;
    }
};
