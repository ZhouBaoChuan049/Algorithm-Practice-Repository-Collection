#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
#include<string>
#include<set>
class Solution
{
public:
    int longestOnes(vector<int>& nums, int k)
    {
        int len = 0;
        for (int right = 0, left = 0, zero = 0; right < nums.size(); right++)
        {
            if (nums[right] == 0)
                zero++;
            while (zero > k) 
            { 
                if (nums[left] == 0)
                    zero--;
                left++;
            }
            len = max(len , right - left + 1);
        }
        return len;
    }
};
//int main()
//{
//    Solution sol;
//    vector <int> v = { 0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1 };
//    sol.longestOnes(v, 3);
//    return 0;
//}