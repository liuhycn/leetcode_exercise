class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        if (nums.empty()) return vector<int>(2, -1);
        vector<int> ans;
        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] < x)
                l = mid + 1;
            else
                r = mid;
        }
        if (nums[l] != x) return vector<int>(2, -1);
        ans.push_back(l);
        l = 0;
        r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (nums[mid] <= x)
                l = mid;
            else
                r = mid - 1;
        }
        ans.push_back(l);
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63392/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。