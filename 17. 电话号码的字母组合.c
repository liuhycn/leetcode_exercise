class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        unordered_map<char,string>dic
        {
            {'2',"abc"},{'3',"def"},
            {'4',"ghi"},{'5',"jkl"},{'6',"mno"},
            {'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
        };
        if(digits.length() == 0) return ans;
        int i = 0;
        while(i< digits.length())
        {
            string temp_str = dic[digits[i]];
            if(i == 0)
            {
                for(int j =0;j<temp_str.length();j++)
                {
                    stringstream ss;
                    ss << temp_str[j];
                    ans.push_back(ss.str());
                }
            }
            else
            {
                vector<string>temp(ans);
                ans.clear();
                for(int j = 0;j< temp_str.length();j++)
                {
                    for(int k = 0;k<temp.size();k++)
                    {
                        ans.push_back(temp[k]+temp_str[j]);
                    }
                }
            }
            i++;
        }
        return ans;
    }
};