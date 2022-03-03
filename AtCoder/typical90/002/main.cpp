#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> ans;
    if (n % 2 != 0) return 0;
    function<void(string, int, int)> solve = [&](string s, int x, int y) -> void {
        if (x + y > n) return;
        if (x < y) return;
        if (x == n / 2 && y == n / 2) ans.push_back(s);
        solve(s + '(', x + 1, y);
        solve(s + ')', x, y + 1);
    };
    solve("", 0, 0);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}
