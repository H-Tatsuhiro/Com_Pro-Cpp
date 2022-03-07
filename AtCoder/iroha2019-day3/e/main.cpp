#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int ans = 0;
    int a = 0, b = 0;
    string s = "";
    for (int i = 0; i < n; i++) {
        char c; cin >> c; s += c;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '/') a++;
        else {
            b++;
            if (i == n - 1) {
                if (a == b) ans++;
            }
            else if (s[i + 1] == '/') {
                if (a == b) ans++;
                a = 0, b = 0;
            }
        }
    }
    cout << ans << endl;
}
