#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void lcm_gcd(int a, int b, int& lcm, int& gcd_val) {
    gcd_val = gcd(a, b);
    lcm = a * b / gcd_val;
}

int main() {
    int m, n;
    cout << "输入两个自然数 m 和 n：";
    cin >> m >> n;

    int g = gcd(m, n);
    int l = 0, g2 = 0;
    lcm_gcd(m, n, l, g2);

    cout << "最大公约数：" << g << endl;
    cout << "最小公倍数：" << l << endl;
    return 0;
}