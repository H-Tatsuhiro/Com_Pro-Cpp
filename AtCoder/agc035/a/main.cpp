#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    map<int, int> cnt;
    for (int i = 0; i < n; i++) cnt[a[i]]++;
    bool ans = false;
    if (cnt.size() == 3) {
        vector<int> v(3, 0), w(3, 0);
        int j = 0;
        for (auto i : cnt) v[j] = i.second, w[j] = i.first, j++;
        sort(v.begin(), v.end());
        if (n % 3 == 0 && ((w[0] ^ w[1]) == w[2]) && ((w[0] ^ w[2]) == w[1]) && ((w[1] ^ w[2]) == w[0]) && v[0] == v[1] && v[1] == v[2]) ans = true;
    }
    if (cnt.size() == 2) {
        vector<int> v(2, 0), w(2, 0);
        int j = 0;
        for (auto [i, k] : cnt) w[j] = i, j++;
        sort(w.begin(), w.end());
        if (n % 3 == 0 && cnt[w[1]] == cnt[w[0]] * 2 && w[0] == 0) ans = true;
    }
    if (cnt.size() == 1 && cnt[0] == n) ans = true;
    cout << (ans ? "Yes" : "No") << endl;
}
