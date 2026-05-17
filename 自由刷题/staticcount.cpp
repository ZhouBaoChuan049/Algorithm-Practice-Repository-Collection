#include<iostream>
using namespace std;
class Solution
{
public:
    Solution()
    {
        cur++;
        sum += cur;
    }

    static int Sum_Solution()
    {
        return sum;
    }
private:
    static int sum;
    static int cur;
};

int Solution::sum = 0;
int Solution::cur = 0;

//int main()
//{
//    int n = 0;
//    cin >> n;
//    Solution* arr = new Solution[n];
//    int result = Solution::Sum_Solution();
//    cout << result << endl;
//    delete[] arr;
//    return 0;
//}