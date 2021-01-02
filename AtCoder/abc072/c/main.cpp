#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> a(n, 0);
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        Map[a[i]]++, Map[a[i] + 1]++, Map[a[i] - 1]++;
    }
    int ans = 0;
    for (int i = 0; i <= 100000; i++) {
        ans = max(ans, Map[i]);
    }
    cout << ans << endl;
}
