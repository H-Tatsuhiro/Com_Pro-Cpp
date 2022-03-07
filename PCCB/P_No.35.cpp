//
// Created by Tatsuhiro Hashimoto on 2020/04/20.
//
#include <iostream>
#include <array>
using namespace std;

const int MAX_N = 1000;
int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
    if (i == n) return sum == k;
    if (dfs(i + 1, sum)) return true;
    if (dfs(i + 1, sum + a[i])) return true;
    return false;
}

void solve() {
    if(dfs(0, 0)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    cin >> n;
    for (int j = 0; j < n; ++j) {
        cin >> a[j];
    }
    cin >> k;
    solve();
}