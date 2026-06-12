#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
    string modifyString(string s) {
        string word;
        for (int i = 0;i < 26;i++)
            word.push_back(i + 97);
        int n = s.size();
        if (s[0] == '?') {
            for (int i = 0;i < word.size();i++)
            {
                if (s[1] == '?') s[0] = 'a';
                if (s[1] != word[i]) s[0] = word[i];
            }
        }
        if (s[n - 1] == '?') {
            for (int i = 0;i < word.size();i++)
            {
                if (s[n - 2] == '?') s[n - 1] = 'a';
                if (s[n - 2] != word[i]) s[n - 1] = word[i];

            }
        }
        for (int j = 1;j < n - 1; j++)
        {
            if (s[j] == '?')
            {
                for (int i = 0;i < word.size();i++)
                    if ((s[j - 1] != word[i]) && (s[j + 1] != word[i])) s[j] = word[i];
            }
        }
        return s;
    }
};
int main()
{
    Solution sol;
    string s("??");
    sol.modifyString(s);
    return 0;
}
