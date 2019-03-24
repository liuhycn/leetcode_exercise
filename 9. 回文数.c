class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        stringstream ss;
        ss<<x; 
        string str = ss.str();
        int i,j;
        for(i = 0,j = str.length()-1;i<j;i++,j--)
        {
            if(str[i] != str[j])
            {
                return false;
            }
        }
        return true;
    }
};