#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int prev = a[0], cnt = 1;
    stack<int> s, t;
    int now = 1, rm = 0;
    cout << now << endl;
    for (int i = 1; i < n; i++) {
        now++;
        if (prev == a[i]) {
            cnt++;
            if (prev == cnt) {
                rm += prev;
                if (t.size() > 0) {
                    cnt = t.top();
                    prev = s.top();
                    s.pop();
                    t.pop();
                }
                else cnt = 0, now = 0, rm = 0;
            }
        }
        else {
            s.push(prev);
            t.push(cnt);
            prev = a[i];
            cnt = 1;
        }
        now -= rm, rm = 0;
        cout << now << endl;
    }
}
