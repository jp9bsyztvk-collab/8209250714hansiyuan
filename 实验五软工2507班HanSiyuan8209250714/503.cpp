#include<iostream>
using namespace std;
class Cuboid {
private:
	double length, width, height;
public:
	void inputDimensions() {
		cout << "请输入长，宽，高：";
		cin >> length >> width >> height;
	}
	double volume() {
		return length * width * height;
	}
	void showVolume() {
		cout << "体积为：" << volume() << endl;
	};
};
int main() 
{
	Cuboid c1,c2,c3;
    cout << "输入第一个长方柱" << endl;
    c1.inputDimensions();
    cout << "\n输入第二个长方柱" << endl;
    c2.inputDimensions();
    cout << "\n输入第三个长方柱" << endl;
    c3.inputDimensions();
    cout << "\n三个长方柱的体积" << endl;
    cout << "第一个长方柱：";
    c1.showVolume();
    cout << "第二个长方柱：";
    c2.showVolume();
    cout << "第三个长方柱：";
    c3.showVolume();

    return 0;
	
}