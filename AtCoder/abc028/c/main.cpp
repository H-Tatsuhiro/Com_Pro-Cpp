#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n = 5;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> ans;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                ans.push_back(a[i] + a[j] + a[k]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 3] << endl;
}
