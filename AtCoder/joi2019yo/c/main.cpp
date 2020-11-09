#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s, t = ""; cin >> n >> s;
    int cnt = 0, i = 0;
    while (i < n - 1) {
        if ((s[i] == 'O' && s[i + 1] == 'X') || (s[i] == 'X' && s[i + 1] == 'O')) {
            cnt++, i += 2;
        }
        else i++;
    }
    cout << cnt << endl;
}
