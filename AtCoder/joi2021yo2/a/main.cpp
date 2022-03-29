#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main() {
    long long int n, a, r = 1, ans = 0;
    string s;
    cin >> n >> a >> s, a--;
    stack<int> x, y;
    x.push(-1), y.push(n);
    for (int i = 0; i < a; i++) if (s[i] == '#') x.push(i);
    for (int i = n - 1; i > a; i--) if (s[i] == '#') y.push(i);
    while(x.size() > 1 || y.size() > 1) {
        if (r) {
            ans += y.top() - a, a = y.top(), r = 0;
            if (y.top() != n) y.pop();
        }
        else {
            ans += a - x.top(), a = x.top(), r = 1;
            if (x.top() != -1) x.pop();
        }
    }
    cout << ans << endl;
}
