class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;

        for(auto num : nums) {mp[num]++;}

        nums.clear();

        for(auto [key,value] : mp)
        {
            for(int i=0;i<value;i++) {nums.push_back(key);}
        }
    }
};

/*
          another solution : Dutch National Flag Algorithm (DNF)

    class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;

        while(mid<=high)
        {
            if(nums[mid]==0) {swap(nums[mid],nums[low]);low++;mid++;}

            else if(nums[mid]==1) {mid++;}
            
            else {swap(nums[mid],nums[high]);high--;}
        }
    }
};
*/