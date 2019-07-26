class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        string ans = strs[0];
        //cout<<ans<<endl;
        for(int i = 1;i< strs.size();i++)
        {
            string temp = strs[i];
            string flag = "";
            int j = 0;
            //cout<<ans<<" "<<temp<<endl;
            int len = min(ans.length(), temp.length());
            while(ans[j] == temp[j] && j<len)
            {
                flag = flag + ans[j];
                j++;
            }
            ans = flag;
            //cout<<ans<<endl;
            if(ans.length() == 0)
            {
                break;
            }
        }
        return ans;
    }
};