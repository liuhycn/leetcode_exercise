class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        if (nums[0] < nums[nums.size() - 1]) return binsearch(nums, 0, nums.size() - 1, target);

        int l = 0;
        int r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] >= nums[0])
                l = mid + 1;
            else 
                r = mid;
        }
        if (nums[0] > target)
            return binsearch(nums, l, nums.size() - 1, target);
        else if (nums[0] < target)
            return binsearch(nums, 0, l - 1, target);
        else
            return 0;
    }

    int binsearch(vector<int>& nums, int l, int r, int target)
    {
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (nums[mid] > target)
                r = mid - 1;
            else
                l = mid;
        }
        if (nums[l] == target) return l;
        else return -1;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63492/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。