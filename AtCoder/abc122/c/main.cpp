#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> a(n, 0);
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1];
        if (s[i - 1] == 'A' && s[i] == 'C') a[i]++;
    }
    for (int i = 0; i < q; i++) {
        int l, r, cnt = 0; cin >> l >> r;
        l--, r--;
        cout << a[r] - a[l] << endl;
    }
}
