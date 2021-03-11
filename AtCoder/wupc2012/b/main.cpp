#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> v(n, "");
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    string ans = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (ans == "") ans = v[i] + v[j];
                else {
                    ans = min(ans, v[i] + v[j]);
                }
            }
        }
    }
    cout << ans << endl;
}
