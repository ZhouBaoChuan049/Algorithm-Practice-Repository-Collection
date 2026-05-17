#include <iostream>
#include<assert.h>
using namespace std;
int getmonthday(int year, int mon)
{
    assert(mon < 13&&mon>0);
    int arrey[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )&& mon == 2)
    {
        return 29;
    }
    return arrey[mon];
}
//int main()
//{
//    int year;
//    int month;
//    int day;
//    cin >> year >> month >> day;
//    int sum=0;
//    month--;
//    while (month != 0)
//    {
//        sum += getmonthday(year, month);
//        month--;
//    }
//    sum += day;
//    cout << sum << endl;
//    return 0;
//}