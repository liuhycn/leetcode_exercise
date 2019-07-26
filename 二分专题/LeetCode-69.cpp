class Solution {
public:
    int mySqrt(int x) {
        long long int l = 0;
        long long int r = x;
        while (l < r)
        {
            long long int mid = l + r + 1 >> 1;
            if (mid <= x / mid)
                l = mid;
            else
                r = mid - 1;
        }
        return l;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63309/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。