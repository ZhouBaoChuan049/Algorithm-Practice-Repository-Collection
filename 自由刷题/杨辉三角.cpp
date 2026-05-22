#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vv;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> v(i,1);
            vv.push_back(v);
        }
        for (int i = 2; i < numRows; i++)
        {
            for (int j = 1; j < i; j++)
            {
                vv[i][j] = vv[i - 1][j - 1] + vv[i-1][j];
            }
        }
        return vv;
    }
};
//int main()
//{
//    Solution sol;
//    sol.generate(5);
//    return 0;
//}