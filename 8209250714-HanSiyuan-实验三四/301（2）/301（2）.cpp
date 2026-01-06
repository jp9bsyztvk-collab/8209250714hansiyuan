#include<iostream>
using namespace std;
int max_gongyue(int a, int b);
int min_gongbei(int a, int b);
int main()
{
	int a, b;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0)
	{
		cout << a << "和" << b << "的最大公约数是：" << max_gongyue(a, b) << endl;
		cout << a << "和" << b << "的最小公倍数是：" << min_gongbei(a, b) << endl;
	}
	else
	{
		cout << "输入错误，请输入正整数！" << endl;
	}
	return 0;
}
int max_gongyue(int a, int b)
{
	if (a == b)
	{
		return a;
	}
	else if (a > b)
	{
		int r = a % b;
		if (r == 0)
		{
			return b;
		}
		else
		{
			int i = 1;
			int k = 1;
			r = b;
			while (i > 0 || k > 0)
			{

				r--;
				i = a % r;
				k = b % r;
			}
			return r;
		}
	}
	else
	{
		int r = b % a;
		if (r == 0)
		{
			return a;
		}
		else
		{
			int i = 1;
			int k = 1;
			r = a;
			while (i > 0 || k > 0)
			{

				r--;
				i = a % r;
				k = b % r;
			}
			return r;
		}
	}
}
int min_gongbei(int a, int b)
{
	return (a * b) / max_gongyue(a, b);
}