#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:
	void SeTime() {
		int h, m, s;
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void ShowTime() {
		cout << hour << ':' << minute << ':' << sec << endl;
	}

};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.SeTime();
	tl.ShowTime();
	return 0;
}