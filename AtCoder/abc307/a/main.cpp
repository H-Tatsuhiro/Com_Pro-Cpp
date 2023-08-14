#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(7 * n, 0);
    for (int i = 0; i < 7 * n; i++) cin >> a[i];
    vector<int> ans;
    int cnt = 0;
    for (int i = 0; i < 7 * n; i++) {
        cnt += a[i];
        if ((i + 1) % 7 == 0) ans.push_back(cnt), cnt = 0;
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}


