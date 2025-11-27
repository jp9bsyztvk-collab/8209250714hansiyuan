#include<iostream>//第一行没有#
using namespace std;
int main()//main函数中m大写，c++中有严格的区分大小写
{
	int k = 0;
	int i = k + 1;//k没有初始定义
	cout << i++ << endl;
	i = 1;//i进行了重定义
	cout << i++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;//后面没有;
}