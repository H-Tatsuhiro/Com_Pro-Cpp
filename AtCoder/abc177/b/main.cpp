#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S, T; cin >> S >> T;
    int n = T.length(), ans = 100000;
    for (int i = 0; i <= S.length() - n; i++) {
        string str = S.substr(i, n);
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (str[j] != T[j]) cnt++;
        }
        ans = min(cnt, ans);
    }
    if (ans == 100000) cout << n << endl;
    else cout << ans << endl;
}
