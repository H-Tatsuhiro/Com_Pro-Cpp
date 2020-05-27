#include <iostream>
using namespace std;
int ans = 0;
void solve(int x) {
    if (x == 0) return;
    if (x == 2) ans += 1;
    else {
        ans += x - 1;
        solve(x - 1);
    }
}
int main() {
    int N, M;
    cin >> N >> M;
    solve(N); solve(M);
    cout << ans << endl;
}
