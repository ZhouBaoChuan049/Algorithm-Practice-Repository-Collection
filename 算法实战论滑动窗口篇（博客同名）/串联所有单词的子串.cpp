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
    vector<int> findSubstring(string s, vector<string>& words)
    {
        vector<int> v;
        map<string, int> mp1;
        map<string, int> mp2;
        for (auto e : words) { mp1[e]++; }
        int len = words[0].size();//每一个子串的长度
        int n = words.size();//这个数组里面有几个字串
        int lengthen = len * n;//整个拼出来的那个字符串有多长
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            int right = i, left = i;
            while (right < s.size())
            {
                mp2[s.substr(right, len)]++;
                if (mp1.find(s.substr(right, len)) != mp1.end() &&
                    mp2[s.substr(right, len)] <= mp1[s.substr(right, len)])
                {
                    count++;
                }
                if (right - left + len > lengthen)
                {
                    if (mp1.find(s.substr(left, len)) != mp1.end() &&
                        mp2[s.substr(left, len)] <= mp1[s.substr(left, len)])
                    {
                        count--;
                    }
                    mp2[s.substr(left, len)]--;

                    if (mp2[s.substr(left, len)]==0)
                    {
                        mp2.erase(s.substr(left, len));
                    }
                    left += len;
                }
                if (count == n)
                    v.push_back(left);
                right += len;
            }
            mp2.clear();
            count = 0;
        }
        return v;
    }
};
//int main()
//{
//    string s1 = "bcabbcaabbccacacbabccacaababcbb";
//    vector<string> v ({ "c","b","a","c","a","a","a","b","c" });
//    Solution sol;
//    sol.findSubstring(s1, v);
//    return 0;
//}