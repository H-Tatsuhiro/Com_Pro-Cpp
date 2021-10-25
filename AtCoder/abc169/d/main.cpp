#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main() {
    long long int n; cin >> n;
    map<long long int, int> Map;
    for (int i = 2; i <= sqrt(n); i++) while (n % i == 0) Map[i]++, n /= i;
    if (n > 1) Map[n]++;
    long long int ans = 0;
    for (auto M: Map) {
        for (int j = 1; j <= 1000; j++) {
            if (j <= M.second) ans++, M.second -= j;
            else break;
        }
    }
    cout << ans << endl;
}
