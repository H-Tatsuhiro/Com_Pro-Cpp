#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, ans = 1000000; cin >> n;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = s[i].length() - 1; j >= 0; j--) {
            if (s[i][j] == '0') tmp++;
            else break;
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}
