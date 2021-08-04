#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, string> > v;
    for (int i = 0; i < n; i++) {
        pair<int, string> p;
        string s; int t; cin >> s >> t;
        p.first = t, p.second = s;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    cout << v[n - 2].second << endl;
}
