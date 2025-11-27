#include<iostream>
using namespace std;
int main()
{
	double a, b;
	double r = 0;
	string c, d;
begin:while (1)
{
	cout << "请输入第一个数字" << endl;
	cin >> a;
	cout << "请输入第二个数字" << endl;
	cin >> b;
sign:cout << "请输入要进行的计算的计算符：+，-，*，/，%" << endl;
	cin >> c;
	if (c == "+" || c == "-" || c == "*" || c == "/" || c == "%")
	{
		if (c == "+")
		{
			r = a + b;
		}
		if (c == "-")
		{
			r = a - b;
		}
		if (c == "*")
		{
			r == a * b;
		}
		if (c == "/")
		{
			if (b != 0)
			{
				r = a / b;
			}
			else
			{
				cout << "除数不能为0，请重新开始输入" << endl;
				goto begin;
			}
		}
		if (c == "%")
		{
			r = int(a) % int(b);
		}
		cout << "这次结果为" << r << endl;
	ask:cout << "是否继续运算？y/n" << endl;
		cin >> d;
		if (d == "y")
		{
			goto begin;
		}
		if (d == "n")
		{
			cout << "欢迎您下次计算。" << endl;
			break;
		}
		if (d != "y" && d != "n")
		{
			cout << "请输入y/n，继续运算->y,退出运算->n" << endl;
			goto ask;
		}
	}
	else
	{
		cout << "请输入正确的运算符" << endl;
		goto sign;
	}

}
return 0;
}