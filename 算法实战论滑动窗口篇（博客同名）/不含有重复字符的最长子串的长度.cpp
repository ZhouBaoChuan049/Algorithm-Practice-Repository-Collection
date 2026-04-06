#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
#include<string>
#include<set>
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        string::iterator left = s.begin();
        string::iterator right = s.begin();
        int len = 0;
        int lengthen = 0;
        set<char> sc;
        while (right != s.end())
        {
            auto judge = sc.insert(*right);
            if (judge.second == true)
            {
                right++;
                len++;
            }
            else if (judge.second == false)
            {
                left++;
                if(len>lengthen)
                    lengthen = len;
                len = 0;
                sc.clear();
            }
        }
        if (len > lengthen)
            lengthen = len;
        return lengthen;
    }
};
//int main()
//{
//    Solution sol;
//    string s = "dvdf";
//    sol.lengthOfLongestSubstring(s);
//    return 0;
//}