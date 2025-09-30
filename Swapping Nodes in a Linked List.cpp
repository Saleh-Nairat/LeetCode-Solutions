
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *LastNode,*newHead=nullptr,*tempHead=head;
        vector<int> nums;

        while(tempHead!=nullptr)
        {
            nums.push_back(tempHead->val);
            tempHead=tempHead->next;
        }

        swap(nums[k-1],nums[nums.size()-k]);

        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                newHead=new ListNode(nums[i]);
                LastNode=newHead;
            }
            else
            {
                ListNode *tempNode=new ListNode(nums[i]);
                LastNode->next=tempNode;
                LastNode=tempNode;
            }
        }
        return newHead;
    }
};