#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<string, int> Map;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            string s; cin >> s;
            Map[s]++;
            v.push_back(s);
        }
    }
    int cnt = 0;
    for (auto x : v) if (Map[x] == n) cnt++, Map[x] = 0;
    cout << cnt << endl;
}
