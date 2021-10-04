#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> A, B, C;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a; A.push(a);
    }
    for (int i = 0; i < n; i++) {
        int a; cin >> a; B.push(a);
    }
    for (int i = 0; i < n; i++) {
        int a; cin >> a; C.push(a);
    }
    long long int ans = 0, x = 0, y = 0, z = 0;
    while (!A.empty()) {
        x = A.top(); A.pop();
        while (!B.empty() && B.top() <= x) B.pop();
        if (B.empty()) break;
        y = B.top(); B.pop();
        while(!C.empty() && C.top() <= y) C.pop();
        if(C.empty()) break;
        z = C.top(); C.pop();
        ans++;
    }
    cout << ans << endl;
}
