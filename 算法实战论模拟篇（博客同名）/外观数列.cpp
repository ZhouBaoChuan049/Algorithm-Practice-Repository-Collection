#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        string ret("1");
        for (int i = 1;i < n;i++)
        {
            string _ret = "";
            int right = 0, left = 0;
            while (right <= ret.size())
            {
                if (right == ret.size() || ret[right] != ret[left])
                {
                    int count = right - left;
                    _ret += to_string(count);
                    _ret += ret[left];
                    left = right;
                }
                right++;
            }
            ret = _ret;
        }
        return ret;
    }
};
//int main()
//{
//    Solution sol;
//    sol.countAndSay(4);
//    return 0;
//}