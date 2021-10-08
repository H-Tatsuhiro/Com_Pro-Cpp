#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int calc_rec(int i, long long int &x, long long int &y, long long int &z) {
    if (i == 1) {
        long long int a = x / 5;
        x %= 5;
        return a;
    }
    else if (i == 2) {
        long long int a = x / 2, b = y / 2;
        if (min(a, b) == 0) {
            return 0;
        }
        else {
            x -= (min(a, b) * 2), y -= (min(a, b) * 2);
            return min(a, b);
        }
    }
    else if (i == 3) {
        long long int a = z / 2, b = x;
        if (min(a, b) == 0) {
            return 0;
        }
        else {
            z -= (min(a, b) * 2), x -= min(a, b);
            return min(a, b);
        }
    }
    else if (i == 4) {
        long long int a = z, b = x / 3;
        if (min(a, b) == 0) {
            return 0;
        }
        else {
            z -= min(a, b), x -= (min(a, b) * 3);
            return min(a, b);
        }
    }
    else {
        long long int a = y / 2, b = z;
        if (min(a, b) == 0) {
            return 0;
        }
        else {
            y -= (min(a, b) * 2), z -= min(a, b);
            return min(a, b);
        }
    }
}
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        long long int a, b, c, ans = 0; cin >> a >> b >> c;
        long long int s = a, ss = b, sss = c;
        vector<int> v = {1, 2, 3, 4, 5};
        do {
            long long int tmp = 0;
            for (int j = 0; j < 5; j++) tmp += calc_rec(v[j], a, b, c);
            ans = max(ans, tmp);
            a = s, b = ss, c = sss;
        } while (std::next_permutation(v.begin(), v.end()));
        cout << ans << endl;
    }
}
