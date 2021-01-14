#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<int, int> Map;
    unordered_map<int, long long int> ans;
    unordered_map<int, bool> Check;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; Map[a[i]]++;
    }
    long long int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == 1) ans[i] = 0;
        else ans[i] = ans[i - 1] + (i - 1);
    }
    for (int i = 0; i < n; i++) if (Check[a[i]] == false) sum += ans[Map[a[i]]], Check[a[i]] = true;
    for (int i = 0; i < n; i++) cout << sum - ans[Map[a[i]]] + ans[Map[a[i]] - 1] << endl;
}
