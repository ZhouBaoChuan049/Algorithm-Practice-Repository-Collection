#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
    string reverseString(string s) {
        int start = 0;
        size_t end = s.size() - 1;
        while (start < end)
        {
            int res = s[start];
            s[start] = s[end];
            s[end] = res;
            start++;
            end--;
        }
        return s;
    }
    bool isPalindrome(string s) {
        string str;
        for (auto ch : s)
        {
            if (ch <= 90 && ch >= 65)
            {
                ch += 32;
                str.push_back(ch);
            }
            else if (ch <= 122 && ch >= 97)
            {
                str.push_back(ch);
            }
        }
        string cmp = reverseString(str);
        if (cmp == str)
        {
            return true;
        }
        else {
            return false;
        }
    }
};
//int main()
//{
//    string s;
//    cin >> s;
//    Solution sol;
//    bool play=sol.isPalindrome(s);
//    if (play == true)
//    {
//        cout << "¶Ô" << endl;
//    }
//    else
//        cout << "´í" << endl;
//    return 0;
//}