#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<char> p(n, '-');
    vector<string> v(n, "-");
    for (int i = 0; i < n; i++) cin >> p[i] >> v[i];
    vector<int> ans(6, 0);
    for (int i = 0; i < n; i++) if (ans[p[i] - 'A'] == 0 && v[i] == "AC") ans[p[i] - 'A'] = i + 1;
    for (int i = 0; i < 6; i++) cout << ans[i] << endl;
}
