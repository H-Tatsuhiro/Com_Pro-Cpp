#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int s; cin >> s;
    long long int mod = 1000000007;
    vector<long long int> dp(s + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= s; i++) for (int j = 0; j <= i - 3; j++) dp[i] += dp[j], dp[i] %= mod;
    cout << dp[s] << endl;
}
