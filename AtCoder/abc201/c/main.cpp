#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int ans = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int l = 0; l < 10; l++) {
                    bool f = false;
                    for (int t = 0; t < 10; t++) {
                        if (s[t] == 'o') {
                            if (i != t && j != t && k != t && l != t) f = true;
                        }
                        else if (s[t] == 'x') {
                            if (i == t || j == t || k == t || l == t) f = true;
                        }
                    }
                    if (f) continue;
                    else ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
