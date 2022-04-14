#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> solve(int m, int p, vector<string> s) {
    if (m == p + 1) return s;
    string t = to_string(m);
    vector<string> x;
    for (int i = 0; i < s.size(); i++) x.push_back(s[i]);
    x.push_back(t);
    for (int i = 0; i < s.size(); i++) x.push_back(s[i]);
    return solve(m + 1, p, x);
}
int main() {
    int n; cin >> n;
    vector ans = solve(1, n, vector<string>());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}
