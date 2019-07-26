class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> mymap;
        vector<int> ans;
        
        if(nums.size() < 2)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        for(int i = 0;i<nums.size();i++)
        {
            if(mymap.count(target - nums[i]) == 1)
            {
                ans.push_back(i);
                ans.push_back(mymap[target - nums[i]]);
                break;
            }
            mymap[nums[i]] = i;
        }
        return ans;
    }
};