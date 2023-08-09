#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) cin >> a[i], Map[a[i]]++;
    long long int ans = 0;
    for (int i = 0; i < n; i++) ans += Map[a[i]] / 2, Map[a[i]] = 0;
    cout << ans << endl;
}


