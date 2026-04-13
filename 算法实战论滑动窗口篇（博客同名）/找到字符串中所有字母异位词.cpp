#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
#include<string>
#include<set>
#include<map>
//class Solution
//{
//public:
//    vector<int> findAnagrams(string s, string p)
//    {
//        vector<int> v;
//        map<char, int> sc1;
//        map<char, int> sc2;
//        for (auto e : p)
//        {
//            sc2[e]++;
//        }
//        string::iterator left = s.begin();
//        string::iterator right = s.begin();
//        for (int i = 0; i < p.size(); i++)
//        {
//            if (right == s.end())
//                return v;
//            sc1[*right]++;
//            right++;
//        }
//        while (right != s.end())
//        {
//            if (sc1 == sc2)
//            {
//                v.push_back(left - s.begin());
//            }
//            sc1[*right]++;
//            right++;
//            sc1[*left]--;
//            if (sc1[*left] == 0)
//                sc1.erase(*left);
//            left++;
//        }
//        if (sc1 == sc2)
//        {    v.push_back(left - s.begin());
//        }
//        return v;
//    }
//};
         
//int main()
//{
//    Solution sol;
//    string s = "aaaaaaaaaa";
//    string p = "aaaaaaaaaaaaa";
//    sol.findAnagrams(s,p);
//    return 0;
//}