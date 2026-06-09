#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
    vector<int> missingTwo(vector<int>& nums) {
        int ret = 0;
        for (int i = 0;i < nums.size();i++)
            ret ^= nums[i];
        for (int i = 1; i <= nums.size() + 2;i++)
            ret ^= i;
        //ret = a^b ;
        int t = 1;
        while (1) {
            if ((t & ret) != 0)
                break;
            else t <<= 1;
        }
        int a = 0; int b = 0;
        for (int i = 1; i <= nums.size() + 2;i++) {
            if ((i & t) != 0)
                a ^= i;
            else if ((i & t) == 0)
                b ^= i;
        }
        for (auto e : nums) {
            if ((e & t) != 0)
                a ^= e;
            if ((e & t) == 0)
                b ^= e;
        }
        vector<int> ans = { a,b };
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> a = { 2 };
    sol.missingTwo(a);
    return 0;
}