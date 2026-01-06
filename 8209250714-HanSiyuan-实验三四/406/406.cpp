#include <iostream>
using namespace std;
void count(const char s[], int counts[]);
bool isLetter(char ch);
char toLower(char ch);

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    int counts[26] = { 0 };
    cout << "Enter a string: ";
    cin.getline(str, MAX_SIZE);
    count(str, counts);
    cout << "Letter counts:" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }
    return 0;
}
bool isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}
void count(const char s[], int counts[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (isLetter(s[i])) {
            char lower_ch = toLower(s[i]);
            int index = lower_ch - 'a';
            if (index >= 0 && index < 26) {
                counts[index]++;
            }
        }
        i++;
    }
}