#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    long long int cnt = 0;
    queue<int> que; int num = 1;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; que.push(a);
    }
    while (!que.empty()) {
        if (que.front() == num) num++;
        else cnt++;
        que.pop();
    }
    if (cnt == n) cout << -1 << endl;
    else cout << cnt << endl;
}
