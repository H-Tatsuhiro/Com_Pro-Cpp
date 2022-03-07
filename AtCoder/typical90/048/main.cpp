#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    priority_queue<pair<int, int>, vector<pair<int, int>>> que;
    for (int i = 0; i < n; i++) que.push(make_pair(b[i], a[i]));
    long long int cnt = 0, ans = 0;
    while(cnt < k) {
        pair<int, int> p = que.top();
        que.pop();
        ans += p.first;
        swap(p.first, p.second);
        p.first -= p.second, p.second = 0;
        que.push(p);
        cnt++;
    }
    cout << ans << endl;
}
