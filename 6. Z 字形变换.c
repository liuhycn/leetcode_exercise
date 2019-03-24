class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows ==1) return s; 
        
        
        int cnt = s.length() - 1;
        int loop = cnt / ((numRows - 1) * 2);

        int other = cnt - loop * ((numRows - 1) * 2);
        string supply = "";
        for(int i =0; i<other;i++)
        {
            supply = supply + "*";
        }

        s = s + supply;
        loop = (s.length()-1) / ((numRows - 1) * 2);
        cnt = 1+loop*(numRows - 1);

        int flag = 1;

        char temp[numRows][cnt] = {0};

        temp[0][0] = s[0];

        for(int i = 0;i<loop;i++)
        {
            for(int j = 1; j<=numRows-1;j++)
            {

                temp[j][i*(numRows - 1)] = s[flag];
                //cout<<s[flag]<<endl;
                //cout<<"把["<<j<<","<<i*(numRows - 1)<<"]换成"<<s[flag]<<endl;
                flag++; 

            }
            for(int k = numRows-2; k>=0;k--)
            {
                temp[k][(i+1)*(numRows-1)-k] = s[flag];
                //cout<<s[flag]<<endl;
                //cout<<k<<" "<<(i+1)*(numRows-1)-k<<endl;
                //cout<<"把["<<k<<","<<(i+1)*(numRows-1)-k<<"]换成"<<s[flag]<<endl;
                flag++;
            }
        }
        string ans = "";
        for(int i = 0;i<numRows;i++)
        {
            for(int j =0;j<cnt;j++)
            {
                if(temp[i][j] != '\0' && temp[i][j] != '*')
                {
                    ans += temp[i][j];
                }
            }
        }
        return ans;
        
    }
};
