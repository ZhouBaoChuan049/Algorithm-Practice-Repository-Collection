#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int sum = nums[0], len = 0, left = 0, right = 0, n = nums.size();
        while (right < n)
        {
            if (sum < target)
            {
                right++;
                if (right < n)
                    sum += nums[right];
            }
            else
            {
                while (sum >= target)
                {
                    if (len == 0)
                        len = right - left + 1;
                    else
                    {
                        if (right - left + 1 < len)
                        {
                            len = right - left + 1;
                        }
                    }
                    left++;
                    sum -= nums[left-1];
                }
            }
        }
        return len;
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v{ 1,4,4 };
//    cout<<sol.minSubArrayLen(4,v)<<endl;
//    return 0;
//}