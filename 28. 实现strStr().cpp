class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(needle.length() == 0) return 0;
        if(haystack.length() < needle.length()) return -1;
        int flag = 0;
        int cnt = needle.length();
        for(int i = 0;i <= haystack.length() - cnt;i++)
        {
            if(haystack.substr(i,cnt) == needle)
            {
                flag = 1;
                return i;
            }
        }
        if(flag == 0) return -1;
        return 0;
    }
};
