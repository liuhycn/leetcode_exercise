class Solution {
public:
    int reverse(int x) {
        
        long int sum = 0;
        string s = to_string(x);
        int pos=s.find_first_not_of("-");
        std::reverse(s.begin()+pos,s.end());
        stringstream out(s);
        out >>sum;
        if(sum>INT_MAX || sum<INT_MIN)
            return 0;
        return sum;    
    }
};
