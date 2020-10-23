#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int sum = 0;
    vector<pair<string, int>> vec;
    for (int i = 0; i < n; i++) {
        string s; long long int p; cin >> s >> p;
        sum += p;
        vec.push_back(make_pair(s, p));
    }
    string ans = "atcoder";
    sum = (sum / 2) + 1;
    for (int i = 0; i < n; i++) {
        if (sum <= vec[i].second) ans = vec[i].first;
    }
    cout << ans << endl;
}
