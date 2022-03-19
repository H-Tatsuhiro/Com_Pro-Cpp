#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<long long int> ans;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i != n / i) ans.push_back(n / i);
            ans.push_back(i);
        }
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}
