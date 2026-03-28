#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    void duplicateZeros(vector<int>& arr)
    {
        int cur = 0, dest = -1, n = arr.size();
        while (dest < n)
        {
            if (arr[cur]) dest++;
            else dest += 2;
            if (dest >= n - 1)
                break;
            cur++;
        }
        if (dest == n)
        {
            arr[dest--] = 0;
            cur--;
        }
        while (dest >= 0)
        {
            if (arr[cur])
                arr[dest--] = arr[cur--];
            else
            {
                arr[dest--] = 0;
                arr[dest--] = 0;
                cur--;
            }
        }
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v = { 1,0,2,3,0,4,5,0 };
//    sol.duplicateZeros(v);
//    return 0;
//}