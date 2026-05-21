#include <iostream>
using namespace std;
#include<vector>
void print_vector(const vector<vector<int>>& v1, const vector<int>& v)
{
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			cout << v1[i][j] << " ";
		}
		cout << endl;
	}
}
void print_strng(vector<string>& vs)
{
	for (auto& ch:vs)
	{
		cout << ch << " ";
		cout << endl;
	}
}
int main()
{
	vector<int> v({1,2,3,4,5,6});
	vector<vector<int>> v1 (9,v);
	v1[2][2] = 2;
	print_vector(v1,v);
	cout << endl;
	string s1("123456789");
	vector<string> vs(10, s1);
	print_strng(vs);
	return 0;
}