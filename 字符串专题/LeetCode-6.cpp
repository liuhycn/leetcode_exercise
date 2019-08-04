class Solution {
public:
    string ans = "";
    string convert(string s, int numRows) {
        if (s.size() <= numRows || numRows == 1) return s;
        int cnt = 2 * (numRows - 1);
        int rem = (s.size() - numRows + 1) % cnt;
        if (rem != 0)
        {
            int add = cnt - rem;
            for (int i = 0; i < add; i++)
                s += '*';
        }
        int loop = (s.size() - numRows + 1) / cnt;

        int n = (loop + 1) * numRows;

        vector<vector<char>> buf(numRows);
        for (int i = 0; i < numRows; i++)
            buf[i] = vector<char>(n, '*');

        for (int i = 0; i < numRows - 1; i++)
            buf[i][0] = s[i];
        int index = numRows - 1;
        for (int t = 0; t < loop; t++)
        {
            for (int i = numRows - 1; i > 0; i--)
            {
                int tmp = (t + 1) * (numRows - 1);
                buf[i][tmp - i] = s[index++];
            }
            for (int i = 0; i < numRows - 1; i++)
            {
                buf[i][(t + 1) * (numRows - 1)] = s[index++];
            }
        }
        for (int i = 0; i < numRows; i++)
            for (int j = 0; j < n; j++)
            {
                if (buf[i][j] != '*')
                    ans += buf[i][j];
            }
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/79547/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。