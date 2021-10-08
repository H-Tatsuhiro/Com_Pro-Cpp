#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    if (s[0] != s[n - 1]) cout << 1 << endl;
    else {
        if (n < 4) cout << -1 << endl;
        else {
            for (int i = 1; i < n - 1; i++) {
                if (s[0] != s[i] && s[i + 1] != s[0]) {
                    cout << 2 << endl;
                    return 0;
                }
            }
            cout << -1 << endl;
            return 0;
        }
    }
}
