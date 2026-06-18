#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string convert(string s, int n) {
        if (n == 1) return s;
        int d = 2 * n - 2;
        string ret;
        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n - 1) {
                for (int j = 0; j+i < s.size();j += d)
                    ret += s[i + j];
            }
            else {
                for (int j = 0; j+i < s.size();j += d) {
                    ret += s[i + j] ;
                    if((d - i + j)<s.size())
                        ret += s[d - i + j];
                }
            }
        }
        return ret;
    }
};
//int main()
//{
//    Solution sol;
//    string s("PAYPALISHIRING");
//    sol.convert(s,4);
//    return 0;
//}