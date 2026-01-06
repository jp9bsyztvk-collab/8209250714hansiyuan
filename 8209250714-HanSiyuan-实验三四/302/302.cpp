#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	cout << "请输入一个整数" << endl;
	int num;
	cin >> num;
	if (num > 0)
	{
		if (is_prime(num))
			cout << num << "是素数" << endl;
		else
			cout << num << "不是素数" << endl;
	}
	else
	{
		cout << "输入错误" << endl;
	}

	//找出前两百个素数
	int n = 1;
	int i = 0;
	while(i<200)
	{
		if (is_prime(n))
		{
			cout << n << " ";
			i++;
			if (i % 10 == 0)
			{
				cout << endl;
			}
		}
		n++;
		
	}
}
bool is_prime(int num)
{
	if (num <= 1)
		return false;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}