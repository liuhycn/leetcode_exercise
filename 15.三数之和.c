class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size() < 3)
        {
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-2;i++)
        {
            int target = -nums[i];
            int l = i+1;
            int r = nums.size()-1;
            while(l < r)
            {
                int sum = nums[l] + nums[r];
                if(sum > target) r--;
                else if(sum < target) l++;
                else 
                {
                    vector<int>tripset = {nums[i],nums[l],nums[r]};
                    ans.push_back(tripset);
                    while(l < r && nums[l+1] == tripset[1]) l++;
                    while(l < r && nums[r-1] == tripset[2]) r--;
                    int val = tripset[0];
                    while(i < nums.size()-2 && nums[i+1] == nums[i]) i++;
                }
            }
           
        }
        return ans;
    }
};