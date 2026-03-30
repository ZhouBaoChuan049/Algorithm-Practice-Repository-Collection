#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
class Solution
{
public:
    int triangleNumber(vector<int>& nums)
    {
        std::sort(nums.begin(),nums.end());
        int count = 0;
        for (int maxi = nums.size() - 1; maxi > 1; maxi--)
        {
            int left = 0, right = maxi - 1;
            while (left < right)
            {
                if (nums[left] == 0 || nums[right] == 0 || nums[maxi] == 0)
                {
                    if (nums[left == 0])
                    {
                        left++;
                    }
                    else if (nums[right] == 0)
                    {
                        right--;
                    }
                    else if(nums[maxi]==0)
                    {
                        break;
                    }
                }
                else
                {
                    if (nums[left] + nums[right] > nums[maxi])
                    {
                        count += (right - left);
                        right--;
                    }
                    else
                    {
                        left++;
                    }
                }
            }
        }
        return count;
    }
};

//int main()
//{
//    Solution sol;
//    vector<int> v = { 48,66,61,46,94,75 };
//    sol.triangleNumber(v);
//    return 0;
//}