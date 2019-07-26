class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty() || nums[nums.size() - 1] < target) return nums.size();
        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] >= target)
                r = mid;
            else
                l = mid + 1; 
        }
        return l;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63367/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。