#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t = "0000"; cin >> s;
    for (int i = 0; i < s.length() - 1; i++) if (s[i] == '1') t[i + 1] = '1';
    cout << t << endl;
}
