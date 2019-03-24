class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int ans = 0;
        while(i < j)
        {
            int a = j-i;
            int b = min(height[i],height[j]);
            if(ans< a*b)
            {
                ans = a*b;
            }
            if(height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};