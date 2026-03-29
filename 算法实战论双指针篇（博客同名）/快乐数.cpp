#include<iostream>
using namespace std;
class Solution
{
public:
    int happy(int n)
    {
        int count = 0;
        while (n)
        {
            count += (n % 10) * (n % 10);
            n /= 10;
        }
        return count;
    }
    int doublehappy(int n) { return happy(happy(n)); }
    bool isHappy(int n)
    {
        int slow = n;
        int fast = n;
        while (slow != fast)
        {
            slow = happy(slow);
            fast = doublehappy(fast);
        }
        if (fast == 1)
            return true;
        else
            return false;
    }
};
//int main()
//{
//    Solution sol;
//    if (sol.isHappy(19))
//        cout << "ÊÇ" << endl;
//    else
//        cout << "²»ÊÇ" << endl;
//    return 0;
//}