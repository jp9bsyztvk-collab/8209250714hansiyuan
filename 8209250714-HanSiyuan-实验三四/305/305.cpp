#include<iostream>
using namespace std;
int count(int day);
int main() {
	int day = 1;
	
	cout << "第一天猴子摘了" << count(day) << "个桃子。" << endl;
}
int count(int day)
{
	if (day==10)
	{
		return 1;
	}
	else {
		return 2 * (count(day + 1) + 1);
	}
}