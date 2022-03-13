#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; string s; cin >> n >> s;
    vector<pair<char, long long int>> p;
    long long int ans = (n * (n + 1)) / 2;
    pair<char, long long int> q = make_pair('-', 0);
    for (int i = 0; i < n; i++) {
        if (q.first != s[i]) p.push_back(q), q.first = s[i], q.second = 1;
        else q.second++;
    }
    p.push_back(q);
    for (int i = 0; i < p.size(); i++) ans -= (p[i].second * (p[i].second + 1)) / 2;
    cout << ans << endl;
}
