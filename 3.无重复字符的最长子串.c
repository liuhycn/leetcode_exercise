class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start = 0;
        int ans = 0;
        map<char,int>mymap;
        
        
        for(int i = 0 ;i < s.length();i++)
        {
            if(mymap.count(s[i]) == 1)
            {
                ans = max(ans,i-start);
                start = mymap[s[i]]+1;
            }
            mymap[s[i]] = i;
        }
        ans = max(ans,i-start+1);
        if(ans == 0)
        {
            ans = s.length();
        }
        
        return ans;
        
    }
};