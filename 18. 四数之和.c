class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size() < 4) return ans;
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i < nums.size() - 3)
        {
            int target1 = target - nums[i];
            int j = i+1;
            while(j < nums.size() - 2)
            {
                int target2 = target1 - nums[j];
                int l = j + 1;
                int r = nums.size() - 1;
                while(l < r)
                {
                    int sum = nums[l] + nums[r];
                    if(sum > target2) r--;
                    else if (sum < target2) l++;
                    else
                    {
                        vector<int>fourset = {nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(fourset);
                        while(l < r && nums[l+1] == fourset[2]) l++;
                        while(l < r && nums[r-1] == fourset[3]) r--;
                        r--;
                        l++;
                    }
                }
                int val1 = nums[j];
                while(j < nums.size() - 2 && nums[j+1] == val1) j++;
                j++;
            }
            int val2 = nums[i];
            while(i < nums.size() - 3 && nums[i+1] == val2) i++;
            i++;
        }
        return ans;
    }
};