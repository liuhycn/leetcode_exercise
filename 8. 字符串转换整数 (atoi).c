class Solution {
public:
    int myAtoi(string str) 
    {
        int pos = 0;
        int flag = 0;
        long long int anss = 0;
        while(1)
        {
            if(str[pos] != ' ')
            {
                break;
            }
            else
            {
                pos++;
            }
        }
        
        string ans = "";
        if(str[pos] == '+')
        {
            pos++;
        }
        else if(str[pos] == '-')
        {
            flag = 1;
            pos++;
        }
        if(str[pos] < '0' || str[pos] > '9')
        {
            return 0;
        }
        while(str[pos] >= '0' && str[pos] <= '9')
        {
            ans = ans + str[pos];
            
            pos++;
        }
        if(ans.length() == 0)
        {
            return 0;
        }
        int loop = ans.length();
        //cout << ans<<endl;

        for(int i = 0;i < loop;i++)
        {
            //cout<< anss<<endl;
            anss = anss*10 + (ans[i] - '0');
            if (anss > INT_MAX)
            {
                if(flag)
                {
                    return INT_MIN;
                }
                else
                    return INT_MAX;
            }
        }
        if(flag)return anss * -1;
        
        return anss;
    }
};