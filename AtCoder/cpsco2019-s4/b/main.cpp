#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, d, ans = -1; cin >> n >> d;
    vector<string> s(d, "");
    for (int i = 0; i < d; i++) cin >> s[i];
    for (int i = 0; i < d - 1; i++) {
        for (int j = i + 1; j < d; j++) {
            int cnt = 0;
            for (int k = 0; k < n; k++) if (s[i][k] == 'o' || s[j][k] == 'o') cnt++;
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;

}
