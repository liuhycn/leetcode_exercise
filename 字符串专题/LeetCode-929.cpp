class Solution {
public:
    set<string> ans;
    string process(string &nums)
    {
        int len = nums.size();
        int addindex = 0;
        int atindex = 0;
        int firstflag = 0;
        for (int i = 0; i < len; i++)
        {
            if (firstflag == 0 && nums[i] == '+')
            {
                addindex = i;
                firstflag = 1;
            }
            if (nums[i] == '@')
                atindex = i;
        }
        string last = nums.substr(atindex + 1, len - 1 - atindex);
        string first;
        if (addindex != 0)
            first = nums.substr(0, addindex);
        else 
            first = nums.substr(0, atindex);
        len = first.size();
        int i = 0;
        while (i < len)
        {
            if (first[i] == '.')
                first.erase(first.begin() + i);
            else
                i++;
        }
        return first + '@' + last;
    }
    int numUniqueEmails(vector<string>& emails) {
        if (emails.size() == 0) return 0;

        for (auto item : emails)
        {
            ans.insert(process(item));
        }
        return ans.size();
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/78324/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。