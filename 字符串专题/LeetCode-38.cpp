class Solution {
public:
    string numsBuf[31];
    string countAndSay(int n) {
        if (n < 1) return "1";
        memset(numsBuf, 0, sizeof(numsBuf));
        string last = "1";
        numsBuf[1] = "1";
        for (int i = 2; i <= 30; i++)
        {
            int len = last.size();
            string tmp = "";
            for (int j = 0; j < len; j++)
            {
                int k = j;
                int cnt = 0;
                while (k < len && last[k] == last[j])
                {
                    cnt ++;
                    k++;
                }
                stringstream ss;
                ss << cnt;
                tmp += ss.str() + last[j];
                if (k == len)
                    break;
                else
                    j = k - 1;
            }
            numsBuf[i] = tmp;
            last = tmp;
        }
        return numsBuf[n];
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/78025/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。