class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string>ans;
        if(n == 0) return ans;
        generate(n,n,"",ans);
        return ans;
    }
public:
    void generate(int l,int r,string s,vector<string> &list)
    {
        if(l == r && l != 0)
        {
            s = s + '(';
            //cout<<s<<endl;
            l--;
            generate(l,r,s,list);
            return;
        }
        if(l == 0 && r == 0)
        {
            list.push_back(s);
            cout<<list.size()<<endl;
            cout<<"push "<<s<<endl;
            return;
        }
        if(l == 0 && r > 0)
        {
            s = s + ')';
            //cout<<s<<endl;
            r--;
            generate(l,r,s,list);
            return;
        }
        if(l < r && l != 0 && r > 0)
        {
            int temp_l = l;
            string temp_s = s;
            int temp_r = r;
            l--;
            s = s + '(';
            //cout<<s<<endl;
            generate(l,r,s,list);
            r--;
            temp_s = temp_s + ')';
            //cout<<s<<endl;
            generate(temp_l,r,temp_s,list);
            return;
        }
        return;
    }
};