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
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int left = 0, right = arr.size() - 1;
        while (right > left)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] >= arr[mid - 1])
                right = mid;
            else if (arr[mid] < arr[mid - 1])
                left = mid + 1;
        }
        return left;
    }
};
//int main()
//{
//    Solution sol;
//    vector <int> v = { 0,1,0 };
//    sol.peakIndexInMountainArray(v);
//    return 0;
//}