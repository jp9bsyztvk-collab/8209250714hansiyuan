#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	char choice;
	double t = 0;
	cout << "ÇëÑ¡ÔñÊäÈëÎÂ¶ÈÎªÉãÊÏÎÂ¶È/»ªÊÏÎÂ¶È£ºc/f" << endl;
	cin >> choice;
	if (choice == 'c')
	{
		cout << "ÇëÊäÈëÉãÊÏÎÂ¶È£º" << endl;
		cin >> t;
		celsius_to_fah(t);
	}
	else if (choice == 'f')
	{
		cout << "ÇëÊäÈë»ªÊÏÎÂ¶È£º" << endl;
		cin >> t;
		fah_to_celsius(t);
	}
	else
	{
		cout << "ÊäÈë´íÎó" << endl;
	}
}
double celsius_to_fah(double celsius) {
	cout << "Celsius" <<  '\t' << "Fahrenheit" << endl;
	cout << celsius << '\t' << (celsius * 9.0 / 5.0) + 32.0 << endl;
	return (celsius * 9.0 / 5.0) + 32.0;
};
double fah_to_celsius(double fah) {
	cout << "Celsius" << '\t' << "Fahrenheit" << endl;
	cout << fah << '\t' << (fah - 32.0) * 5.0 / 9.0 << endl;
	return (fah - 32.0) * 5.0 / 9.0;
};