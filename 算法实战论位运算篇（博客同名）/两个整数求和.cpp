#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int getSum(int a, int b)
    {
        int sum_without_carry = a ^ b;
        int carry = (a & b) << 1;
        while (1)
        {
            if (carry)
            {
                int next_carry = (sum_without_carry & carry) << 1;
                sum_without_carry ^= carry;
                carry = next_carry;
            }
            else
                return sum_without_carry;
        }
        return -1;
    }
};