#include<assert.h>
#include<vector>
#include<iostream>
using namespace std;
template <class T>
void QuickSort(vector<T>& v,int begin,int end)
{
	if (begin>=end)
		return;
	int left = begin;
	int right = end;
	int key = v[left];
	while (left < right)
	{
		while (left < right && v[right] >= key)
		{
			right--;
		}
		while (left < right && v[left] <= key)
		{
			left++;
		}
		if(left<right)
			std::swap(v[left], v[right]);
	}
	std::swap(v[begin], v[left]);
	QuickSort(v, begin, left - 1);
	QuickSort(v, left + 1, end);
}
template <class T>
void print_vector_of_sort(vector<T>& v)
{
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> v({ 9,8,7,5,6,4,2,3,1,0 });
	print_vector_of_sort(v);
	QuickSort(v,0,v.size()-1);
	print_vector_of_sort(v);
	return 0;
}