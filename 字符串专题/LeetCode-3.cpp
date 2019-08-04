class Solution {
public:
    int ans = 0;
    map<char, int> mymap = map<char, int>();
    int check(char c)
    {
        if (mymap.find(c) == mymap.end())
            return -1;
        else
            return mymap[c];
    }
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if (len < 2) return len;
        for (int i = 0, j = 0; i < len; i++)
        {
            while (j < len && check(s[j]) == -1)
            {
                mymap[s[j]] = j;
                j++;
            }
            ans = max(ans, j - i);
            if (j == len) break;
            while (i < j && s[i] != s[j])
            {
                mymap.erase(mymap.find(s[i]));
                i++;
            }
            mymap.erase(mymap.find(s[i]));
        }
        return ans;
    }

};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/79548/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。