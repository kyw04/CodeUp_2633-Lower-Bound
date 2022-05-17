#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k, left, right, mid;
	cin >> n >> k;
	vector<int> v(n);
	for (auto& a : v)
		cin >> a;
	left = 0;
	right = n;
	mid = n;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (v[mid] < k)
			left = mid + 1;
		else
			right = mid;
	}
	cout << right + 1;
	return 0;
}