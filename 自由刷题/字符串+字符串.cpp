#include<iostream>
using namespace std;
#include<string>
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string result;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        int cen = 0;
        

        while (i >= 0 || j >= 0)
        {
            int zong = 0;
            int flag = 0;
            int jia1 = i >= 0 ? num1[i] : '0';
            int jia2 = j >= 0 ? num2[j] : '0';
            cen = jia1-'0' + jia2-'0'+carry;
            if (cen >= 10)
            {
                flag = 1;
                carry=1;
                cen -= 10;
            }
            zong += cen;
            result.insert(0, 1, zong + '0');
            i--;
            j--;
            if (flag == 0)
            {
                carry = 0;
            }
        }
        if (carry != 0)
        {
            result.insert(0, 1, '1');
        }
        //result.insert(0, 1, zong + '0');
        return result;

    }
};
int main()
{
    Solution sol;
    string num1;
    string num2;
    cin >> num1 >> num2;
    string ret=sol.addStrings(num1, num2);
    cout << ret << endl;
    return 0;
}