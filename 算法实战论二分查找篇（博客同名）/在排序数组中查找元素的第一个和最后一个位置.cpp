#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
#include<string>
#include<set>
#include<map>
class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        if (nums.empty())
            return { -1,-1 };
        vector <int> v;
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (mid < target)left = mid + 1;
            else right = mid;
        }
        if (nums[right] == target) v.push_back(left);
        else return { -1,-1 };
        left = 0; right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left + 1) / 2;
            if (mid <= target) left = mid;
            else right = mid - 1;
        }
        if (nums[right] == target) v.push_back(left);
        else return { -1,-1 };
        return v;
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v = { 5,7,7,8,8,10 };
//    sol.searchRange(v, 8);
//    return 0;
//}