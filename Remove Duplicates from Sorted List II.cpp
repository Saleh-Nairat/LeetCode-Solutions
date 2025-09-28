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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *newHead=nullptr,*temp=head;
        bool foundHead=false;

        map<int,int> mp;

        while(temp!=nullptr)
        {
            mp[temp->val]++;
            temp=temp->next;
        }

        for(auto [key,value] : mp)
        {
            if(!foundHead && value==1)
            {
                newHead=new ListNode(key);
                foundHead=true;
            }
            else if(foundHead && value==1)
            {
                ListNode *tempHead=newHead;
                while(tempHead->next!=nullptr)
                {
                    tempHead=tempHead->next;
                }
                tempHead->next=new ListNode(key);
            }
        }
        return newHead;
    }
};