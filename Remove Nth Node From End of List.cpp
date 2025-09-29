
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> temp;
        ListNode *LastNode,*newHead=nullptr,*tempHead=head;

        while(tempHead!=nullptr)
        {
            temp.push_back(tempHead->val);
            tempHead=tempHead->next;
        }

        temp.erase(temp.begin()+temp.size()-n);
        for(int i=0;i<temp.size();i++)
        {
            if(i==0)
            {
                newHead=new ListNode(temp[i]);
                LastNode=newHead;
            }
            else
            {
                ListNode *tempNode=new ListNode(temp[i]);
                LastNode->next=tempNode;
                LastNode=tempNode;
            }
        }
        return newHead;
    }
};