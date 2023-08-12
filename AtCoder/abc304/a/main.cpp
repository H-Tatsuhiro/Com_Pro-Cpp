#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int m = 10e9 + 1, c = -1;
    vector<string> s, ans;
    for (int i = 0; i < n; i++) {
        string t; int a;
        cin >> t >> a, s.push_back(t);
        if (m > a) m = a, c = i;
    }
    m = c;
    while (true) {
        if (m % n == c && m > c) break;
        ans.push_back(s[m % n]), m++;
    }
    for (int i = 0; i < n; i++) cout << ans[i] << endl;
}


