#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> vv;
        sort(nums.begin(), nums.end());
        int maxi = nums.size() - 1;
        while (maxi > 1)
        {
            int left = 0;
            int right = maxi - 1;
            int target = -nums[maxi];
            while (left < right)
            {
                if (nums[right] + nums[left] > target)
                {
                    right--;
                }
                else if (nums[right] + nums[left] < target)
                {
                    left++;
                }
                else
                {
                    vector<int> v = { nums[right],nums[left],nums[maxi] };
                    if (find(vv.begin(), vv.end(), v) != vv.end())
                        vv.push_back(v);
                    left++;
                    right--;
                }
            }
            maxi--;
        }
        return vv;
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v = { -1,0,1,2,-1,-4 };
//    sol.threeSum(v);
//    return 0;
//}