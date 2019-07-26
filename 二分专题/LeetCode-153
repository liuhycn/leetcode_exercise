class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums[0] < nums[nums.size() - 1]) return nums[0];
        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] < nums[0])
                r = mid;
            else
                l = mid + 1;
        }
        return nums[l];
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63426/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。