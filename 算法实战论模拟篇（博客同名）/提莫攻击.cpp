#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution
{
public:
    int findPoisonedDuration(vector<int>& time, int dur)
    {
        int ret = dur;
        for (int i = 0;i < time.size() - 1;i++)
        {
            int ner = time[i + 1] - time[i];
            if (ner >= dur)
                ret += dur;
            else ret += ner;
        }
        return ret;
    }
};
