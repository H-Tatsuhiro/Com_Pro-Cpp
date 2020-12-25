#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    if (n % 2 != 0) cout << -1 << endl;
    else {
        string a = s.substr(0, n / 2), b = s.substr(n / 2, n / 2);
        int cnt = 0;
        for (int i = 0; i < n / 2; i++) if (a[i] != b[i]) cnt++;
        cout << cnt << endl;
    }
}
