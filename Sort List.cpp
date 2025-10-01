class Solution {
public:
    ListNode* sortList(ListNode* head) {
        multiset<int> st;
        ListNode *tempHead=head,*LastNode,*newHead=nullptr;

        while(tempHead!=nullptr)
        {
            st.insert(tempHead->val);
            tempHead=tempHead->next;
        }

        for(auto value : st)
        {
            if(newHead==nullptr)
            {
                newHead=new ListNode(value);
                LastNode=newHead;
            }

            else
            {
                ListNode *tempNode=new ListNode(value);
                LastNode->next=tempNode;
                LastNode=tempNode;
            }
        } 
        return newHead;
    }
};