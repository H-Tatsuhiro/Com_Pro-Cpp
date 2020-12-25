#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int ans = 0;

    while(s.length() > 1) {
        bool t = true;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] != s[i + 1]) {
                ans += 2;
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                t = false;
                break;
            }
        }
        if (t) break;
    }
    cout << ans << endl;
}
