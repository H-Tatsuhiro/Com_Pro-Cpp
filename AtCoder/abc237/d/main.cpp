#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a, b, ans;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'L') b.push_back(i);
        else a.push_back(i);
    }
    for (int i = a.size() - 1; i >= 0; i--) ans.push_back(a[i]);
    ans.push_back(n);
    for (int i = 0; i < b.size(); i++) ans.push_back(b[i]);
    for (int i = 0; i <= n; i++) cout << ans[i] << (i == n ? '\n' : ' ');
}
