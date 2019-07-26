class Solution {
public:
    int hIndex(vector<int>& nums) {
        if (nums.empty()) return 0;
        int l = 0;
        int r = nums.size() - 1;
        int n = nums.size();
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] >= n - mid)
                r = mid;
            else
                l = mid + 1;
        }
        return min(n - l, nums[l]);
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63946/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。