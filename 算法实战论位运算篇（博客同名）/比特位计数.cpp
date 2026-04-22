#include<iostream>
using namespace std;
#include<vector>
#include<map>
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        v.push_back(0);
        for (int i = 1; i < n + 1; i++)
        {
            int ci = i;
            long long count = 0;
            while (ci > 0)
            {
                if ((ci & 1) == 1) { count++; }
                ci=ci >> 1;
            }
            v.push_back(count);
        }
        return v;
    }
};
//int main()
//{
//    Solution sol;
//    sol.countBits(2);
//    return 0;
//}