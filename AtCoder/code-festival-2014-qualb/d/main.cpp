#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) cin >> h[i];
    function<vector<int>()> solve = [&](){
        vector<int> v = h, res(n, 0);
        v.push_back(100001);
        stack<int> S;
        S.push(n);
        for (int i = n - 1; i >= 0; i--) {
            while (v[S.top()] <= v[i]) S.pop();
            res[i] = S.top() - i - 1;
            S.push(i);
        }
        return res;
    };
    vector x = solve();
    reverse(h.begin(), h.end());
    vector y = solve();
    reverse(y.begin(), y.end());
    for (int i = 0; i < n; i++) cout << x[i] + y[i] << endl;
}
