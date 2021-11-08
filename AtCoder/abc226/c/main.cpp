#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> t(n + 1, 0), k(n + 1, 0);
    vector<vector<int>> a;
    a.push_back(vector<int>(0));
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> k[i];
        vector<int> c(k[i], 0);
        for (int j = 0; j < k[i]; j++) cin >> c[j];
        a.push_back(c);
    }
    long long int ans = 0;
    vector<bool> learn(10e6, false);
    function<void(int)> calc = [&](int p){
        for (int i = 0; i < k[p]; i++) {
            if (learn[a[p][i]]) continue;
            else {
                calc(a[p][i]);
            }
        }
        ans += t[p];
        learn[p] = true;
    };
    calc(n);
    cout << ans << endl;
}
