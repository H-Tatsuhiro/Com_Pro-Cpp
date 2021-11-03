#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, k; cin >> x >> k;
    int p = 1;
    for (int i = 0; i < k; i++) p *= 10;
    if (p == 1) cout << x + 1 << endl;
    else {
        string s = to_string(x);
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++) if (i <= k - 1) s[i] = '0';
        reverse(s.begin(), s.end());
        int t = stoi(s);
        t += p;
        cout << t << endl;
    }
}
