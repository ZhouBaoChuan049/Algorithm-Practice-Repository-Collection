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
        int num = 0;
        int prevnum = num;
        while (num < nums.size()-2)
        {
            int left = num + 1;
            int right = nums.size() - 1;
            int prevleft = left;
            int prevright = right;
            int target = -nums[num];
            while (left < right)
            {
                if (nums[left] + nums[right] > target)
                {
                    right--;
                    prevright = right;
                }
                else if (nums[left] + nums[right] < target)
                {
                    left++;
                    prevleft = left;
                }
                else
                {
                    vv.push_back({ nums[num],nums[left],nums[right] });
                    while (nums[prevright] == nums[right] && left < right)
                    {
                        right--;
                    }
                    while (nums[prevleft] == nums[left] && left < right)
                    {
                        left++;
                    }
                    prevleft = left;
                    prevright = right;
                }
            }
            while (nums[num] == nums[prevnum] && num < nums.size()-2)
            {
                num++;
            }
            prevnum = num;
        }
        return vv;
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v = { -4,-4,-1,0,0,0,1,1,4,4,5,6 };
//    sol.threeSum(v);
//    return 0;
//}