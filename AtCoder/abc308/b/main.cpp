#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<string> c(n, ""), d(m, "");
    vector<int> p(m + 1, 0);
    unordered_map<string, int> Map;
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < m; i++) cin >> d[i];
    for (int i = 0; i < m + 1; i++) cin >> p[i];
    for (int i = 0; i < m; i++) Map[d[i]] = p[i + 1];
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        if (Map[c[i]] == 0) sum += p[0];
        else sum += Map[c[i]];
    }
    cout << sum << endl;
}


