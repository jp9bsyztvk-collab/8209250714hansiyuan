#include<iostream>
using namespace std;
int main()
{
	double danjia = 0.8;
	int shu = 2;
	double cost = 0;
	double a = 0;
	double average = 0;
	int day = 0;
	while (shu <= 100)
	{
		cost = shu * danjia + a;
		a = cost;
		shu = shu * 2;
		day++;
	}
	average = cost / day;
	cout << "每天平均花" << average << "元" << endl;
	return 0;
}