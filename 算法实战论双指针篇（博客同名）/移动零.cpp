#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int dest = -1, cur = 0;cur < nums.size();cur++)
            if (nums[cur])
                std::swap(nums[cur], nums[++dest]);
    }
};
int main()
{
    Solution sol;
    vector<int> v = { 1,5,9,0,4,6,0,2,8,7,0,2,0,6,0 };
    sol.moveZeroes(v);
}