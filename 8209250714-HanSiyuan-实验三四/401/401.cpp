#include<iostream>
using namespace std;
int main() {
	int i = 10;
	int a[10];
	int c[10];
	int k = 0;
	cout << "Enter ten numbers:";
	while (i > 0) 
	{
		cin >> a[i - 1];
		i--;
	}
	for(int b=0;b<10;b++)
	{
		bool is_new = 1;
		for (int j = 0; j < k; j++) {
			if (a[b] == c[j]) {
				is_new = 0;
				break;
			}
		}
		if (is_new) {
			c[k] = a[b];
			k++;
		}
	}
	cout << "The distinct numbers are :";
	while (i < k)
	{
		cout << c[i] << " ";
		i++;
	}
}