#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	cin >> a;
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int i type:" << testUnint << endl;//<<oct
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2？：在转换时截取了65534的低16位，开头为1，所以为-，进行补码计算后为-2。
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;//16进制输出
	cout << "output on oct unsighed int type:" << oct << testUnint << endl;//8进制输出
	cout << static_cast<int> (a);
	system("pause");
	return 0;

}