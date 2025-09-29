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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) {return head;}
        
        ListNode *newHead=nullptr,*LastNode,*tempHead=head;
        vector<int> nums;
        bool foundHead=false;

        while(tempHead!=nullptr)
        {
            nums.push_back(tempHead->val);
            tempHead=tempHead->next;
        }

        for(int i=0;i<nums.size()-1;i+=2)
        {
            swap(nums[i],nums[i+1]);
        }
        
        for(auto e : nums)
        {

            if(!foundHead)
            {
                newHead=new ListNode(e);
                LastNode=newHead;
                foundHead=true;
            }

            else
            {
                ListNode *tempNode=new ListNode(e);
                LastNode->next=tempNode;
                LastNode=tempNode;
            }

        }
        return newHead;
    }
};