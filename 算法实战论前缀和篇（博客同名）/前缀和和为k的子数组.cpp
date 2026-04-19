//#include<iostream>
//using namespace std;
//#include<vector>
//#include<map>
//class Solution
//{
//public:
//    int subarraySum(vector<int>& nums, int k)
//    {
//        int n = nums.size(), sum = 0, count = 0;
//        map<int, int> mp;
//        mp.insert(make_pair(0, 1));
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//            count += mp[sum - k];
//            mp[sum]++;
//        }
//        return count;
//    }
//};
//int main()
//{
//    Solution sol;
//    vector<int> v = { -1,-1,1 };
//    sol.subarraySum(v,0);
//    return 0;
//}