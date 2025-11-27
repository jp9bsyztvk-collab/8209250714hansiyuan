#include<iostream>
using namespace std;
int main()
{
	double x;
	double y;
	cin >> x;
	if (x > 0 && x < 10)
	{
		if (x < 1)
		{
			cout << "y=" << 3 - 2 * x << endl;
		}
		if (x >= 1 && x < 5)
		{
			cout << "y=" << 2.0 / (4 * x) + 1 << endl;
		}
		if (x >= 5)
		{
			cout << "y=" << x * x << endl;
		}
	}
	else
	{
		cout << "请重新开始，输入值需大于0";
	}
	return 0;
}