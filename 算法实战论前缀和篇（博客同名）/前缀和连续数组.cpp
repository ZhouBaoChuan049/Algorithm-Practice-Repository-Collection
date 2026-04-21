//#include<iostream>
//using namespace std;
//#include<vector>
//#include<map>
//class Solution
//{
//public:
//    int findMaxLength(vector<int>& nums)
//    {
//        for (auto& e : nums)
//        {
//            if (e == 0) e = -1;
//        }
//        map<int, int> mp;
//        mp.insert(make_pair(0, 1));
//        int n = nums.size(), sum = 0, count = 0;
//        for (auto e : nums)
//        {
//            sum += e;
//            count += mp[sum];
//            mp[sum]++;
//        }
//        return count;
//    }
//};
//int main()
//{
//    Solution sol;
//    vector <int> v = { 0,1,1,1,1,1,0,0,0 };
//    sol.findMaxLength(v);
//    return 0;
//}