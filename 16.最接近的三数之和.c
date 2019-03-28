class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size()-2; i++)
        {
            
            int target1 = target-nums[i];
            int l = i+1;
            int r = nums.size()-1;
            //cout<<i<<" "<<l<<" "<<r<<endl;
            while(l < r)
            {
                int sum = nums[l] + nums[r];
                if(sum > target1)
                {
                    int over = sum - target1;
                    if(abs(over) < abs(ans)) ans = over;
                    r--;
                    //cout<<l<<" "<<r<<">"<<over<<ans<<endl;
                }
                else if (sum < target1)
                {
                    int over = sum - target1;
                    if(abs(over) < abs(ans)) ans = over;
                    l++;
                    //cout<<l<<" "<<r<<"<"<<over<<ans<<endl;
                }
                else
                {
                    return target;
                }
                int val = nums[i];
                while(i < nums.size()-2 && nums[i+1] == nums[i]) i++;
            }
        }
        return ans + target;
    }
};