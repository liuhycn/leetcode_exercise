class Solution {
public:
    int eraseZeroInt(string &val)
    {
        while (val.size() > 1 && val[0] == '0')
            val.erase(val.begin());
        int ans = 0;
        sscanf(val.c_str(), "%d", &ans);
        return ans;
    }
    vector<int> nums1;
    vector<int> nums2;
    int compareVersion(string ver1, string ver2) {
        int len = ver1.size();
        for (int i = 0; i < len; i++)
        {
            int j = i;
            string tmp;
            while (j < len && ver1[j] != '.')
            {
                tmp += ver1[j];
                j++;
            }
            nums1.push_back(eraseZeroInt(tmp));
            i = j;
        }
        len = ver2.size();
        for (int i = 0; i < len; i++)
        {
            int j = i;
            string tmp;
            while (j < len && ver2[j] != '.')
            {
                tmp += ver2[j];
                j++;
            }
            nums2.push_back(eraseZeroInt(tmp));
            i = j;
        }
        if (nums1.size() > nums2.size())
        {
            int tmp = nums1.size() - nums2.size();
            for (int i = 0; i < tmp; i++)
                nums2.push_back(0);
        }
        else if (nums2.size() > nums1.size())
        {
            int tmp = nums2.size() - nums1.size();
            for (int i = 0; i < tmp; i++)
                nums1.push_back(0);
        }
        len = nums1.size();
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (nums1[i] > nums2[i])
            {
                ans = 1;
                break;
            }
            else if (nums1[i] < nums2[i])
            {
                ans = -1;
                break;
            }
        }
        return ans;
    }
};

作者：小仙童
链接：https://www.acwing.com/activity/content/code/content/78272/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。