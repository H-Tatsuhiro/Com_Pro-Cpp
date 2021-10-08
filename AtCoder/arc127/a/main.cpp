#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = 0;
    vector<pair<long long int, long long int>> v;
    v.push_back(make_pair(0, 9));
    for (long long int i = 10; i <= 10e14; i *= 10) v.push_back(make_pair(i, i * 10 - 1));
    v.push_back(make_pair(1000000000000000, 1000000000000000));
    vector<vector<long long int>> p, q;
    for (int i = 0; i < 15; i++) {
        vector<long long int> a;
        for (int j = 0; j <= i; j++) a.push_back(j);
        vector<long long int> b = a;
        b.push_back((long long int)(i + 1));
        reverse(a.begin(), a.end());
        b.insert(b.end(), a.begin(), a.end());
        p.push_back(b);
    }
    long long int s = 0;
    for (int i = 0; i < 15; i++) {
        vector<long long int> a;
        long long int d = 1, e = 8, ss = s;
        for (int j = 0; j < i - 1; j++) d *= 10;
        if (i == 0) d = 0;
        for (int j = 0; j < p[i].size(); j++) {
            if (i != 0 && j == 0) {
                a.push_back(ss);
                continue;
            }
            if (j == i + 1) {
                a.push_back(ss + 1);
                ss += 1;
            }
            else if (j > p[i][j]) {
                a.push_back(ss + e);
                ss += e;
                e *= 10;
            }
            else {
                a.push_back(ss + d);
                ss += d;
                d /= 10;
            }
        }
        s = ss;
        q.push_back(a);
    }

    bool t = false;
    long long bef = -1;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < p[i].size(); j++) {
            if (i != 0 && j == 0) continue;
            if (n <= bef) {
                t = true;
                break;
            }
            ans += p[i][j] * (min(q[i][j], n) - bef);
            bef = q[i][j];
        }
        if (t) break;
    }
    if (n == 1000000000000000) ans++;
    cout << ans << endl;
}
