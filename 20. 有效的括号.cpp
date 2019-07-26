class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>dic
        {
            {')','('},{']','['},{'}','{'}
        };
        vector<char>stack;
        for(int i = 0;i < s.length();i++)
        {
            if(stack.empty())
            {
                stack.push_back(s[i]);
            }
            else
            {
                if(stack[stack.size()-1] == dic[s[i]]) stack.pop_back();
                else stack.push_back(s[i]);
            }
        }
        return stack.empty();
    }
};