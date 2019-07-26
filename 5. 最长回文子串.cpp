class Solution {
public:
    string longestPalindrome(string s) 
    {
        if((s.length() <= 1))
        {
            return s;
        }
        string ans = "";
        int len = 0;
        bool dp[s.length()][s.length()] = {0};
        for(int j = 0;j<s.length();j++)
        {
            for(int i = 0;i<=j;i++)
            {
                dp[i][j] = (s[i] == s[j]) && ((j - i<=2) || dp[i+1][j-1]);
                if(dp[i][j])
                {
                    if((j-i+1)>len)
                    {
                        len = j-i+1;
                        ans = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
};