#include<iostream>
using namespace std;
int main() {
	const int count = 100;
	bool a[count+1] = { false };
	for (int n = 1; n <= count; n++) {
		for (int j = n; j <= count; j = j + n) {
			a[j] = !a[j];
		}
	}
	for (int i = 0; i <= count; i++) {
		if (a[i]) {
			cout << i << " ";
		}
	}
	return 0;
}