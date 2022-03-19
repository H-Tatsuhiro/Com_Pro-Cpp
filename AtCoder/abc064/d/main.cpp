#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') x++;
        else x--, y = (x < 0 ? max(y, -1 * x) : y);
    }
    for (int i = 0; i < y; i++) s = '(' + s;
    n += y, x = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') x++;
        else x--;
    }
    for (int i = 0; i < x; i++) s = s + ')';
    cout << s << endl;
}