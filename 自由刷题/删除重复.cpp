#include<assert.h>
#include<vector>
#include<iostream>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int prev = 0;
        int cur = prev + 1;
        while (cur < nums.size())
        {
            if (nums[cur] == nums[prev])
            {
                nums.erase(nums.begin() + cur);
            }
            else if (nums[cur] != nums[prev])
            {
                prev++;
                cur = prev + 1;
            }
        }
        return nums.size();
    }
};

//int main()
//{
//    vector<int> v({1,1,2,2,5,9,11,11,14,14,15,15});
//    Solution sol;
//    int ret=sol.removeDuplicates(v);
//    cout<< ret << endl;
//    return 0;
//}