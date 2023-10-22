#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    long long int ans = 0;
    vector<int> cnt(10, 0);
    for (int i = 0; i < n; i++) cnt[s[i] - '0']++;
    for (unsigned long long int i = 0; i < 1e7; i++) {
        unsigned long long int a = i * i;
        string t = to_string(a);
        t = std::string(std::max(0, n-(int)t.size()), '0') + t;
        vector<int> tmp(10, 0);
        for (int j = 0; j < t.length(); j++) tmp[t[j] - '0']++;
        if (cnt == tmp) ans++;
    }
    cout << ans << endl;
}


