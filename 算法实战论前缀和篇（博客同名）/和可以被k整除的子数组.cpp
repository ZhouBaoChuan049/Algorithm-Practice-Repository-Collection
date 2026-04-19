//#include<iostream>
//using namespace std;
//#include<vector>
//#include<map>
//class Solution
//{
//public:
//    int subarraysDivByK(vector<int>& nums, int k)
//    {
//        int n = nums.size(), sum = 0, count = 0;
//        map<int, int> mp;
//        mp.insert(make_pair(0, 1));
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//            count += mp[(sum % k+k)%k];
//            mp[(sum % k + k) % k]++;
//        }
//        return count;
//    }
//};
//int main()
//{
//    Solution sol;
//    vector<int> v = { -1,-9,-4,0 };
//    sol.subarraysDivByK(v,9);
//    return 0;
//}