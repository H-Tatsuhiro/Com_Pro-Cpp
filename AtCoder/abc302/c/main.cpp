#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<int> p;
    for (int i = 0; i < n; i++) p.push_back(i);
    bool t = false;
    do {
        bool f = true;
        for (int i = 0; i < n - 1; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) if (s[p[i]][j] != s[p[i + 1]][j]) cnt++;
            if (cnt != 1) f = false;
        }
        if (f) t = true;
    } while(next_permutation(p.begin(), p.end()));
    cout << (t ? "Yes" : "No") << endl;
}

