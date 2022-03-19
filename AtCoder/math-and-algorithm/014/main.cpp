#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m; cin >> n, m = n;
    vector<long long int> ans;
    for (int i = 2; i <= sqrt(n); i++) {
        while(m % i == 0) {
            m /= i;
            ans.push_back(i);
        }
    }
    if (m != 1LL) ans.push_back(m);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}
