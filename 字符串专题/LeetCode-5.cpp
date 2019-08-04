class Solution {
public:
    bool dp[1001][1001];
    int l;
    int r;
    int max = 0;
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;
        int len = s.size();
        for (int j = 0; j < len; j++)
            for (int i = 0; i < len; i++)
            {
                if (j - i < 1)
                    dp[i][j] = true;
                else if (j == i + 1)
                    dp[i][j] = s[i] == s[j];
                else
                    dp[i][j] = dp[i + 1][j - 1] && s[i] == s[j];
                if (dp[i][j] && j - i + 1 > max)
                {
                    l = i;
                    r = j;
                    max = j - i + 1;
                }
            }
        return s.substr(l, r - l + 1);
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/79641/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。