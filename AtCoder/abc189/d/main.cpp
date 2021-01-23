#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> dp(2, 1);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        vector<long long int> p(2); swap(dp, p);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                int x = j;
                if (s == "AND") x &= k;
                else x |= k;
                dp[x] += p[j];
            }
        }
    }
    cout << dp[1] << endl;
}
