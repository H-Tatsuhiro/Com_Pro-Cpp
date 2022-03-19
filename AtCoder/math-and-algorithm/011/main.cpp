#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> ans;
    for (int i = 2; i <= n; i++) {
        bool t = true;
        for (int j = 2; j <= sqrt(i); j++) if (i % j == 0) t = false;
        if (t) ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}
