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
bool isPalindrome(vector<int> nums)
{
    string s;
    for(int i=0;i<nums.size();i++)
    {
        s+=to_string(nums[i]);
    }
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
public:
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        while(head!=nullptr)
        {
            temp.push_back(head->val);
            head=head->next;
        }
        return isPalindrome(temp);
    }
};