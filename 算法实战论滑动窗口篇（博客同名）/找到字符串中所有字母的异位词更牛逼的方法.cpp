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
    vector<int> findAnagrams(string s, string p)
    {
        map<char, int> mp1;
        map<char, int> mp2;
        for (auto e : p) { mp2[e]++; }
        int m = p.size();
        int n = s.size();
        string::iterator left = s.begin();
        string::iterator right = s.begin();
        int count = 0;
        vector<int> v;
        while (right != s.end())
        {
            mp1[*right]++;
            if (mp2.find(*right) != mp2.end() && mp1[*right] <= mp2[*right])
                count++;
            while ((right - left + 1) > m)
            {
                if (mp2.find(*left) != mp2.end() && mp1[*left] <= mp2[*left])
                    count--;
                mp1[*left]--;
                if (mp1[*left] == 0)
                    mp1.erase(*left);
                left++;
            }
            if (count == m)
                v.push_back(left - s.begin());
            right++;
        }
        return v;
    }
};
//int main()
//{
//    Solution sol;
//    string s = "cbaebabacd";
//    string p = "abc";
//    sol.findAnagrams(s, p);
//    return 0;
//}