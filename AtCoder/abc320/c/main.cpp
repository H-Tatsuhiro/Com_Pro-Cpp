#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int m; cin >> m;
    vector<string> s(3, "");
    for (int i = 0; i < 3; i++) cin >> s[i], s[i] += s[i] + s[i];
    vector<int> p = {0, 1, 2};
    int ans = 1000;
    for (int i = 0; i < 10; i++) {
        do {
            auto a = s[p[0]].find(char(i + '0'), 0);
            if (a == string::npos) continue;
            auto b = s[p[1]].find(char(i + '0'), a + 1);
            if (b == string::npos) continue;
            auto c = s[p[2]].find(char(i + '0'), b + 1);
            if (c == string::npos) continue;
            ans = min(ans, int(c));
        } while (next_permutation(p.begin(), p.end()));
    }
    cout << (ans == 1000 ? -1 : ans) << endl;
}


