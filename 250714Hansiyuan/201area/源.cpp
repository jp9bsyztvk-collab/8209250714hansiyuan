#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "请输入一个字符: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') 
    {
        char upper_ch = ch - 32;
        cout << "转换为大写: " << upper_ch << endl;
    }
    else 
    {
        int next_ascii = ch + 1;
        cout << "后继字符的ASCII码值: " << next_ascii << endl;
    }

    return 0;
}