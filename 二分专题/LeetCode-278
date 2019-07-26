// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        while (l < r)
        {
            int mid = (long long)l + r >> 1;
            if (isBadVersion(mid))
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63725/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。