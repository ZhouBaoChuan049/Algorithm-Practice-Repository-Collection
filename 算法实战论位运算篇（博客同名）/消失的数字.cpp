#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        //方法一位运算
        // int a = nums[0] ;
        // for(int i = 1 ; i < nums.size() ; i++)
        //     a ^= nums[i];
        // for(int i = 0 ; i <= nums.size() ; i++ )
        //     a ^= i ;
        // return a ; 
        //方法二高斯求和
        // int sum = 0 ;
        // for(auto e : nums)
        //     sum += e ;
        // for(int i = 0 ;i <= nums.size();i++)
        //     sum -= i ;
        // return -sum ;
        //方法三哈希
        vector<int> arrey(nums.size() + 1, 0);
        for (auto e : nums)
            if (arrey[e] == 0) arrey[e] = 1;
        int ret = 0;
        for (int i = 0;i < nums.size();i++)
            if (arrey[i] == 0) { ret = i; break; }
        return ret;
    }
};
int main()
{
    Solution sol;
    vector<int> a = { 0,1 };
    sol.missingNumber(a);
    return 0; 
}