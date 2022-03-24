#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, p; cin >> n >> p;
    vector<pair<long long int, int>> factors;
    for (int i = 2; i <= sqrt(p); i++) {
        pair<long long int, int> x = {i, 0};
        while(p % i == 0) x.second++, p /= i;
        factors.push_back(x);
    }
    if (p != 1LL) factors.push_back({p, 1});
    long long int ans = 1;
    for (int i = 0; i < factors.size(); i++) for (int j = 0; j < factors[i].second / n; j++) ans *= factors[i].first;
    cout << ans << endl;
}
