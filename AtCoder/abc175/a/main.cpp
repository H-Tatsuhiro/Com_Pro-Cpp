#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s; int cnt = 0, ans = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'R') cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
