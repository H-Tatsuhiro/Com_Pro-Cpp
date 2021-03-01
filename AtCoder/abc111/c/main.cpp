#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<pair<int, int>> p, q;
    unordered_map<int, int> A, B;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) A[v[i]]++;
        else B[v[i]]++;
    }
    for (int i = 1; i <= 100000; i++) p.push_back(make_pair(A[i], i)), q.push_back(make_pair(B[i], i));
    sort(p.begin(), p.end()); reverse(p.begin(), p.end());
    sort(q.begin(), q.end()); reverse(q.begin(), q.end());
    int x = p[0].second, y = q[0].second; n /= 2;
    if (x == y) cout << min((n - p[0].first) + (n - q[1].first), (n - p[1].first) + (n - q[0].first)) << endl;
    else cout << (n - p[0].first) + (n - q[0].first) << endl;
}
