#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(10, 0);
    for (int i = 0; i < 10; i++) cin >> a[i];
    vector<string> c(n, "");
    for (int i = 0; i < n; i++) cin >> c[i];
    vector<int> v(7, 0);

    for (int i = 0; i < 7; i++) {
        int cnt = 0, tmp = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (c[j][i] == '-') cnt = max(cnt, tmp), tmp = 0;
            else tmp++;
        }
        cnt = max(cnt, tmp);
        v[i] = cnt;
    }
    sort(a.begin(), a.end()); sort(v.begin(), v.end());
    int l = a.size() - 1;
    for (int i = 6; i >= 0; i--) {
        if (v[i] > a[l]) {
            cout << "NO" << endl;
            return 0;
        }
        else l--;
    }
    cout << "YES" << endl;
    return 0;
}
