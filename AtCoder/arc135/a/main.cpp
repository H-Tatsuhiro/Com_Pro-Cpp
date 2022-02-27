#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    long long int x, MOD = 998244353; cin >> x;
    unordered_map<long long int, long long int> Map;
    function<long long int(long long int)> fn = [&](long long int n) -> long long int {
        if (Map[n]) return Map[n];
        long long int &ret = Map[n];
        if (n <= 4) return (ret = n);
        long long int a = n / 2, b = (n + 1) / 2;
        return (ret = fn(a) * fn(b) % MOD);
    };
    cout << fn(x) << endl;
}
