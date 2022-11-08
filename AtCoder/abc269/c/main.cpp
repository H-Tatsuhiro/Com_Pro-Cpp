#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<long long int> ans = {0};
    for (int i = 0; i < 60; i++) {
        if (n & (1LL << i)) {
            int m = ans.size();
            for (int j = 0; j < m; j++) ans.push_back(ans[j] |(1LL << i));
        }
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}
