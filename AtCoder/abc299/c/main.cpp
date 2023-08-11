#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string ss; cin >> n >> ss;
    string s = '-' + ss;
    vector<int> a;
    for (int i = 0; i < s.length(); i++) if (s[i] == '-') a.push_back(i);
    int ans = -1;
    for (int i = 0; i < a.size() - 1; i++) ans = max(ans, a[i + 1] - a[i] - 1);
    a.clear();
    s = ss + '-';
    for (int i = 0; i < s.length(); i++) if (s[i] == '-') a.push_back(i);
    for (int i = 0; i < a.size() - 1; i++) ans = max(ans, a[i + 1] - a[i] - 1);
    cout << (ans < 1 ? -1 : ans) << endl;
}


