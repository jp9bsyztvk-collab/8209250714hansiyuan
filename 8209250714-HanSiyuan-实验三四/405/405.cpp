#include <iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]);
int main() {
    const int MAX_SIZE = 100;
    char s1[MAX_SIZE], s2[MAX_SIZE];
    cout << "Enter the first string: ";
    cin.getline(s1, MAX_SIZE);
    cout << "Enter the second string: ";
    cin.getline(s2, MAX_SIZE);
    int index = indexOf(s1, s2);
    cout << "indexOf(¡°"<< s1 << "¡±,¡°" << s2 << "¡±)is " << index << endl;
    return 0;
}
int indexOf(const char s1[], const char s2[]) {
    if (s1[0] == '\\0') {
        return 0;
    }
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}