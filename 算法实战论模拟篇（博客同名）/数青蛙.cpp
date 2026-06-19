#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution
{
public:
    int minNumberOfFrogs(string croakOfFrogs)
    {
        int n = croakOfFrogs.size();
        vector<int> Frogs(5, 0);
        for (int i = 0; i < n; i++)
        {
            if (croakOfFrogs[i] == 'c')
            {
                if (Frogs[4] != 0)
                    Frogs[4]--;
                Frogs[0]++;
            }
            else
            {
                if (croakOfFrogs[i] == 'r')
                {
                    if (Frogs[0] == 0) return -1;
                    Frogs[0]--;
                    Frogs[1]++;
                }
                if (croakOfFrogs[i] == 'o')
                {
                    if (Frogs[1] == 0) return -1;
                    Frogs[1]--;
                    Frogs[2]++;
                }
                if (croakOfFrogs[i] == 'a')
                {
                    if (Frogs[2] == 0) return -1;
                    Frogs[2]--;
                    Frogs[3]++;
                }
                if (croakOfFrogs[i] == 'k')
                {
                    if (Frogs[3] == 0) return -1;
                    Frogs[3]--;
                    Frogs[4]++;
                }
            }
        }
        for (int i = 0;i < Frogs.size()-1;i++)
            if (Frogs[i] != 0) return -1;
        return Frogs[4];
    }
};
int main()
{
    Solution sol;
    sol.minNumberOfFrogs("crcoakroak");
    return 0;
}