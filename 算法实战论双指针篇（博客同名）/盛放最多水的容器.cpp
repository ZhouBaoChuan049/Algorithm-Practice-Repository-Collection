#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int maxV = 0;
        int n = height.size();
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            int min = height[left];
            int mini = left;
            if (height[left] > height[right]) 
            { 
                min = height[right]; 
                mini = right;
            }
            int V = min * (right - left);
            if (maxV < V)
                maxV = V;
            if (mini == right)
            {
                right--;
            }
            else if (mini == left)
            {
                left++;
            }
        }
        return maxV;
    }
};
//int main()
//{
//    Solution sol;
//    vector<int> v = { 1,8,6,2,5,4,8,3,7 };
//    sol.maxArea(v);
//    return 0;
//}