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
    string minWindow(string s, string t)
    {
        string answer;
        int len = INT_MAX, left = 0, right = 0, count = 0, m = t.size();
        map<char, int> mp1;
        map<char, int>mp2;
        for (auto e : t) { mp2[e]++; }
        while (right < s.size())
        {
            mp1[s[right]]++;
            if (mp2.find(s[right]) != mp2.end() && mp1[s[right]] == mp2[s[right]])
            {
                count++;
            }
            while (count == m)
            {
                int n = right - left + 1;
                if (len > n)
                {
                    len = n;
                    answer = s.substr(left, n);
                }
                if (mp2.find(s[left]) != mp2.end() && mp1[s[left]] == mp2[s[left]])
                {
                    count--;
                }
                mp1[s[left]]--;
                if (mp1[s[left]] == 0) { mp1.erase(s[left]); }
                left++;
            }
            right++;
        }
        return answer;
    }
};
//int main()
//{
//    string s1 = "aa";
//    string s2 = "aa";
//    Solution sol;
//    sol.minWindow(s1, s2);
//    return 0;
//}