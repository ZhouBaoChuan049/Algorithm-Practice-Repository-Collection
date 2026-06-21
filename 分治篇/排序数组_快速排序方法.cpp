#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        srand((unsigned int)(time(NULL)));
        qsort(nums, 0, nums.size() - 1);
        return nums;
    }
    void qsort(vector<int>& num, int left, int right)
    {
        if (left >= right)
            return;
        int key = GetRandom(num, left, right);
        int a = left;
        int b = right;
        for (int i = left;i <= right; )
        {
            if (num[i] < key)
            {
                swap(num[left++], num[i++]);
            }
            else if (num[i] > key)
            {
                swap(num[right--], num[i]);
            }
            else i++;
        }
        qsort(num, a, left - 1);
        qsort(num, right + 1, b);
    }
    int GetRandom(vector<int>& v, int l, int r)
    {
        return v[rand() % (r - l + 1) + l];
    }
};
int main()
{
    Solution sol;
    vector< int > v = { 6,0,9,7,3,5,1,4,2,8 };
    sol.sortArray(v);
    return 0;
}