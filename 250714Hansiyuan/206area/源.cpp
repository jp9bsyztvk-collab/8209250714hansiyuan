#include<iostream>
using namespace std;
int main()
{
	int a, b;//两个正整数
	int	max = 0;//最大公约数
	int min = 0;//最小公倍数
	int i = 0;//遍历用
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	if (a >= b)
	{
		i = a;
		while (i % a != 0 || i % b != 0)
		{
			i++;
		}
		min = i;
		cout << "最小公倍数为" << min << endl;//最小公倍数计算
		i = b;
		while (a % i != 0 || b % i != 0)
		{
			i--;
		}
		max = i;
		cout << "最大公约数为" << max << endl;//最大公约数计算
	}
	else
	{
		i = b;
		while (i % a != 0 || i % b != 0)
		{
			i++;
		}
		min = i;
		cout << "最小公倍数为" << min << endl;
		i = a;
		while (a % i != 0 || b % i != 0)
		{
			i--;
		}
		max = i;
		cout << "最大公约数为" << max << endl;//与第一种情况刚好相反
	}
	return 0;
}