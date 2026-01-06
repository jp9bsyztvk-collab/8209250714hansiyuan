#include<iostream>
using namespace std;
void change(double &a, double &b);
void pao(double list[], int size);
int main() {
	const int size = 10;
	double a[size];
	cout << "ÇëÊäÈë10¸öÊý×Ö" << endl;
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
	pao(a, size);
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
void change(double &a, double &b) {
	double t = a;
	a = b;
	b = t;
}
void pao(double list[], int size) {
	bool changed = true;
	do
	{
		changed = false;
		for(int j=0;j<size-1;j++)
			if (list[j] > list[j + 1])
			{
				change(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}