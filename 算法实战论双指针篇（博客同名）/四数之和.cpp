#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector <vector <int>> vv;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; )//!
        {
            int datarget = target - nums[i];
            for (int j = i + 1; j < n - 2; )//!
            {
                int dbtarget = datarget - nums[j];
                int left = j + 1;
                int right = n - 1;
                while (left < right)
                {
                    if (nums[left] + nums[right] > dbtarget) { right--; }
                    else if (nums[left] + nums[right] < dbtarget) { left++; }
                    else
                    {
                        vv.push_back({ nums[i],nums[j],nums[left],nums[right] });
                        left++;
                        right--;
                        while (nums[left - 1] == nums[left] && left < right)
                        {
                            left++;
                        }
                        while (nums[right + 1] == nums[right] && left < right)
                        {
                            right--;
                        }
                    }
                }
                j++;
                while (nums[j - 1] == nums[j] && j < n - 2)
                {
                    j++;
                }
            }
            i++;
            while (nums[i - 1] == nums[i] && i < n - 3)
            {
                i++;
            }
        }
        return vv;
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v = { 1000000000,1000000000,1000000000,1000000000 };
//    sol.fourSum(v, -294967296);
//    return 0;
//}