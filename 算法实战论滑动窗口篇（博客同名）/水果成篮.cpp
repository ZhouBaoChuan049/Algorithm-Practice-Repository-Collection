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
    int totalFruit(vector<int>& fruits)
    {
        int left = 0, right = 0, n = fruits.size();
        map<int, int> mp;
        int len = 0;
        while (right < n)
        {
            mp[fruits[right]]++;
            len = max(len, right - left + 1);
            while (mp.size() > 2)
            {
                mp[fruits[left]]--;
                left++;
            }
            right++;
        }
        return len;
    }
};
//int main()
//{
//    Solution sol;
//    vector <int> v = { 3,3,3,1,2,1,1,2,3,3,4 };
//    sol.totalFruit(v);
//    return 0;
//}