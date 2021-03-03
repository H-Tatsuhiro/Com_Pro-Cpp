#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; cin >> s;
    int ans = 0, n = s.length();
    unordered_map<string, bool> Map;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= min(3, n); j++) {
            if (i + (j - 1) <= n - 1) {
                string t = s.substr(i, j);
                if (!Map[t]) {
                    ans++, Map[t] = true;
                    if (j == 3) {
                        string a = t;
                        a[0] = '.', a[2] = '.';
                        if (!Map[a]) ans++, Map[a] = true;
                    }
                    for (int k = 0; k < j; k++) {
                        string p = t;
                        for (int l = 0; l < j; l++) {
                            if (k + l <= j - 1) p[k + l] = '.';
                            if (!Map[p]) ans++, Map[p] = true;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
