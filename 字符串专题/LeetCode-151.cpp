class Solution {
public:
    vector<string> buf;
    string reverseWords(string nums) {
        string ans = "";
        if (nums.size() == 0) return ans;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            int j = i;
            string tmp = "";
            while (j < len && nums[j] != ' ')
            {
                tmp += nums[j];
                j++;
            }
            if (tmp != "")
            buf.push_back(tmp);
            i = j;
        }
        len = buf.size();
        for (int i = len - 1; i >= 0; i--)
        {
            if (i == 0)
                ans += buf[i];
            else
                ans += buf[i] + " ";
        }
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/78126/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。