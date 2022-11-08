#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, ans = 0; cin >> a >> b;
    string s = "...", t = "...";
    if (a == 1) s[0] = '-';
    else if (a == 2) s[1] = '-';
    else if (a == 4) s[2] = '-';
    else if (a == 3) s[0] = '-', s[1] = '-';
    else if (a == 5) s[0] = '-', s[2] = '-';
    else if (a == 6) s[1] = '-', s[2] = '-';
    else if (a == 7) s[0] = '-', s[1] = '-', s[2] = '-';
    if (b == 1) t[0] = '-';
    else if (b == 2) t[1] = '-';
    else if (b == 4) t[2] = '-';
    else if (b == 3) t[0] = '-', t[1] = '-';
    else if (b == 5) t[0] = '-', t[2] = '-';
    else if (b == 6) t[1] = '-', t[2] = '-';
    else if (b == 7) t[0] = '-', t[1] = '-', t[2] = '-';
    vector<int> v = {1, 2, 4};
    for (int i = 0; i < 3; i++) if (s[i] == '-' || t[i] == '-') ans += v[i];
    cout << ans << endl;
}
