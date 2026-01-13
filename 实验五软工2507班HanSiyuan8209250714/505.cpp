#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;

public:
    Point(int a,int b) {
        x = a;
        y = b;
        cout << "构造函数被调用，坐标初始化为(" << x << "," << y << ")" << endl;
    }
    void setPoint(int i, int j) {
        x = x + i;
        y = y + j;
        cout << "setPoint函数被调用，坐标修改为(" << x << "," << y << ")" << endl;
    }
    void display() {
        cout << "当前坐标: (" << x << "," << y << ")" << endl;
    }
};
int main() {
    Point p1(60,80);
    p1.display();
    p1.setPoint(5, 10);
    p1.display();
    p1.setPoint(-10, 20);
    p1.display();
    return 0;
}