#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, d; cin >> n >> d;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0, tmp = 0;
    for (int i = 0; i < d; i++) {
        bool f = true;
        for (int j = 0; j < n; j++) if (s[j][i] == 'x') f = false;
        if (f) tmp++;
        else ans = max(ans, tmp), tmp = 0;
    }
    cout << max(ans, tmp) << endl;
}


