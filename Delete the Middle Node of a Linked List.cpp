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
        ListNode *temp=head;

        int size=0,counter=0;
        while(temp!=nullptr)
        {
            size++;
            temp=temp->next;
        }

        temp=head;

        while(temp!=nullptr)
        {
            if(counter==size/2-1)
            {
                temp->next=temp->next->next;
                break;
            }
            else
            {
                counter++;
                temp=temp->next;
            }
        }
        if(size==1)
        return nullptr;
        return head;
    }
};