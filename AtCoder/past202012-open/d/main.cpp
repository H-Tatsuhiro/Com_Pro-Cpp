#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<pair<int, string>, int>> p(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int a = 0;
        for (auto c : s) {
            if (c == '0') a++;
            else break;
        }
        int b = s.length() - a;
        p[i] = make_pair(make_pair(b, s.substr(a, b)), -a);
    }
    sort(p.begin(), p.end());
    for (auto ans : p) cout << string(-ans.second, '0') << ans.first.second << endl;
}
