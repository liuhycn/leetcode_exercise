class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i = nums.size() - 1;
        int min = INT_MAX;
        int min_index = 0;
        int flag = 0;
        while(i >= 1)
        {
            if(nums[i] > nums[i - 1])
            {
                flag = 1;
                break;
            }
            i--;
        }
        if(flag == 0)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        else
        {
            i--;
            int temp = nums[i];
            for(int j = i+1; j<nums.size();j++)
            {
                if(nums[j]>temp && nums[j] < min)
                {
                    cout<<nums[j]<<endl;
                    min = nums[j];
                    min_index = j;
                }
            }
            cout<<min<<" "<<min_index<<endl;
            temp = nums[i];
            nums[i] = min;
            nums[min_index] = temp;
            sort(nums.begin()+i+1,nums.end());
            return;
        }
        return;
    }
};
