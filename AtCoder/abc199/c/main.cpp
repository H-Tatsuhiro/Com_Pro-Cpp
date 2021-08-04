#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    string w = s.substr(n, n);
    string v = s.substr(0, n);
    int q; cin >> q;
    bool rev = false;
    for (int i = 0; i < q; i++) {
        int t; cin >> t;
        int a, b; cin >> a >> b;
        if (t == 1) {
            if (rev) {
                if (a <= n && b <= n) swap(w[a - 1], w[b - 1]);
                else if (a <= n && b > n) swap(w[a - 1], v[b - n - 1]);
                else swap(v[a - n - 1], v[b - n - 1]);
            }
            else {
                if (a <= n && b <= n) swap(v[a - 1], v[b - 1]);
                else if (a <= n && b > n) swap(v[a - 1], w[b - 1 - n]);
                else swap(w[a - n - 1], w[b - n - 1]);
            }
        }
        else {
            if (rev) rev = false;
            else rev = true;
        }
    }
    if (rev) cout << w << v << endl;
    else cout << v << w << endl;
}
