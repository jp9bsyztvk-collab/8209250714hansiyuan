#include<iostream>
using namespace std;
int main()
{
	string c = "*";
	int a = 1;//*每行数目
	int b = 0;//底边*数目
	int i = 0;//计数
	int k = 0;//每行空格数
	cout << "请输入图形底边的*数目" << endl;
	cin >> b;
	k = b - 1;//首行空格数
begin:while (a <= b)
{
	while (i < k)
	{
		cout << " ";
		i++;
	}//完成一行中空格的输出
	i = 0;//计数单位初始化
	while (i < a)
	{
		cout << c;
		i++;
	}//完成一行中*输出
	cout << endl;
	k -= 1;
	a += 1;
	i = 0;//计数单位初始化
	goto begin;

}
return 0;
}