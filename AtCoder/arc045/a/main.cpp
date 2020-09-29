#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    bool flag = false;
    string s, t = "";
    while (cin >> s) {
        if (flag) t += ' ';
        if (s == "Left") t += '<';
        else if (s == "Right") t += '>';
        else t += 'A';
        flag = true;
    }
    cout << t << endl;
}
