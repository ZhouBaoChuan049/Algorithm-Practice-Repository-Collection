#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int>& nums)
    {
        int n = nums.size();
        int left = -1 ;
        int right = n ;
        for (int i = 0;i < right; )
        {
            if (nums[i] == 0)
                swap(nums[i++], nums[++left]);
            else if (nums[i] == 2)
                swap(nums[i], nums[--right]);
            else i++;
        }
    }
};
//int main()
//{
//    Solution sol;
//    vector< int > v = { 1,2,0 };
//    sol.sortColors(v);
//    return 0;
//}
