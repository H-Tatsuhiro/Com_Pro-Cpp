#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, prev = -1; cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (prev == -1 || abs(prev - a) == 1) {
            ans.push_back(a);
            prev = a;
            continue;
        }
        if (prev > a) for (int j = prev - 1; j >= a + 1; j--) ans.push_back(j);
        else for (int j = prev + 1; j <= a - 1; j++) ans.push_back(j);
        ans.push_back(a);
        prev = a;
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}


