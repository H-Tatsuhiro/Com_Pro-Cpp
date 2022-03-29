#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
template<class T, class U> long long int comb(T n, U r){
    if (n < r || n == 0 || r == 0) return 0LL;
    if (n == r) return 1LL;
    if (n - r < r) r = n - r;
    long long int x = 1, y = 1;
    for (int i = n; i > n - r; i--) x *= i;
    for (int j = r; j >= 2; j--) y *= j;
    return (x / y);
}
int main() {
    int n, a; cin >> n;
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) cin >> a, Map[a]++;
    long long int ans = comb(Map[50000], 2);
    for (int i = 1; i < 50000; i++) ans += Map[i] * Map[100000 - i];
    cout << ans << endl;
}
