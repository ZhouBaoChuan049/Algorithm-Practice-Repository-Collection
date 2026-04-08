#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
#include<string>
#include<set>
class Solution
{
public:
    int minOperations(vector<int>& nums, int x)
    {
        int n = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            n += nums[i];
        }
        int target = n - x;
        int sum = 0;
        int len = -1;
        if (target < 0)
            return -1;
        for (int left = 0, right = 0; right < nums.size(); right++)
        {
            sum += nums[right];
            if (sum > target)
            {
                while (sum > target)
                {
                    sum -= nums[left];
                    left++;
                }
            }
            if (sum == target)
            {
                len = max(len, right - left + 1);
            }
        }
        if (len == -1)return -1;
        else return nums.size() - len;
    }
};
//int main()
//{
//    Solution sol;
//    vector <int> v = { 5,6,7,8,9 };
//    sol.minOperations(v, 4);
//    return 0;
//}