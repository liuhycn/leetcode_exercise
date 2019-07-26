class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        int l = 1;
        int r = n;
        while (l < r)
        {
            int mid = l + r >> 1;
            int yl = 0;
            int yr = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= l && nums[i] <= mid)
                    yl++;
                else if (nums[i] >= mid + 1 && nums[i] <= r)
                    yr++;
            }
            if (yl > mid - l + 1)
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63831/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。