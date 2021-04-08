#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int ans = 0;
    for (int i = 0; i <= 999; i++) {
        int cnt = 0;
        char a = (char)(i / 100 + 48), b = (char)((i / 10) % 10 + 48), c = (char)(i % 10 + 48);
        for (int j = 0; j < n; j++) {
            if (cnt == 0) {
                if (s[j] == a) cnt++;
            }
            else if (cnt == 1) {
                if (s[j] == b) cnt++;
            }
            else {
                if (s[j] == c) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
