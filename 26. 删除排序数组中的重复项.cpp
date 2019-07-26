class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        if(nums.size() == 0) return 0;
        int i = 0;
        while(i < nums.size() - 1)
        {
            if(nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i);
                continue;
            }
            else i++;
        }
        return nums.size();
    }
};
