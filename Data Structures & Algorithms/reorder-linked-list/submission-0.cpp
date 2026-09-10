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
    void reorderList(ListNode* head) {
        ListNode dummy(0),dummy2(0);
        dummy.next=head;
        ListNode* slow=&dummy, *fast= &dummy;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head2,*temp_head=slow->next,*prev=nullptr;
        slow->next=nullptr;

        while(temp_head!=nullptr)
        {
            ListNode* n=temp_head->next;
            temp_head->next=prev;
            prev=temp_head;
            temp_head=n;
        }
        head2=prev;
        ListNode* start=&dummy2;
        while(head!=nullptr && head2!=nullptr)
        {
            ListNode* f=head,* s=head2;
            start->next=f;head=head->next;
            start->next->next=s;head2=head2->next;
            start=s;s->next=nullptr;
        }
        if(head!=nullptr)
        {
            start->next=head;
            head->next=nullptr;
        }
        dummy2.next=nullptr;
    }
};
