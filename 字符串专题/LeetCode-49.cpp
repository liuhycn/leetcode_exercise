class Solution {
public:
    map<string, vector<string>>mymap;
    void insert(string key, string val)
    {
        if (mymap.find(key) == mymap.end())
            mymap[key] = vector<string>(1, val);
        else
            mymap[key].push_back(val);
    }
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        vector<vector<string>> ans;
        if (nums.size() == 0) return ans;
        for (auto item : nums)
        {
            string tmp = item;
            sort(tmp.begin(), tmp.end());
            insert(tmp, item);
        }
        for (auto item : mymap)
        {
            ans.push_back(item.second);
        }
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/78117/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。