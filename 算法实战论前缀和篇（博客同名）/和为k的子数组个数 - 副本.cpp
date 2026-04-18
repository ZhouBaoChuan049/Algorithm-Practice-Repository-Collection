#include <iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int left = 0, right = 0, count = 0, n = nums.size(), sum = 0;
        while (right < n)
        {
            sum += nums[right];
            while (sum > k)
            {
                sum -= nums[left];
                left++;
            }
            if (sum == k)
            {
                count++;
            }
            right++;
        }
        return count;
    }
};
int main()
{
    Solution sol;
    vector<int> v = { 1 };
    sol.subarraySum(v,0);
    return 0;
}