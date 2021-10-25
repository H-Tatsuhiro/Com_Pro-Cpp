#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    long long int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < m; j++) if (s[i][j] == '1') cnt++;
        if (cnt % 2 == 0) x++;
        else y++;
    }
    cout << x * y << endl;
}
