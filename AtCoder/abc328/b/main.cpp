#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
     int n; cin >> n;
     vector<int> d(n, 0);
     for (int i = 0; i < n; i++) cin >> d[i];
     int ans = 0;
     for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= d[i - 1]; j++) {
             string a = to_string(i) + to_string(j);
             bool t = true;
             for (int k = 0; k < a.length() - 1; k++) if (a[k] != a[k + 1]) t = false;
            if (t) ans++;
         }
     }
     cout << ans << endl;
}


