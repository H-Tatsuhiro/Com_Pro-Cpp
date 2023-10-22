#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long long int> p(n, 0);
    unordered_map<long long int, long long int> Map;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        long long int q; cin >> q;
        Map[p[i]] = q;
    }
    long long int ans = 0;
    for (int i = 0; i < p.size(); i++) {
        long long int ne = Map[p[i]] / 2;
        Map[p[i]] -= 2 * ne;
        if (ne > 0) p.push_back(2 * p[i]), Map[2 * p[i]] += ne;
        ans += Map[p[i]];
        Map[p[i]] = 0;
    }
    cout << ans << endl;
}


