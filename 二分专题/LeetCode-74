class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int x) {
        if (m.empty()) return false;
        int l = 0;
        int r = m[0].size() - 1;
        while (l < m.size() && r >= 0)
        {
            if (m[l][r] == x)
                return true;
            else if (m[l][r] > x)
                r--;
            else
                l++;
        }
        return false;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/63411/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。