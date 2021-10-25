#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int main() {
    string s; cin >> s;
    deque<char> deq;
    bool rev = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') rev = !rev;
        else {
            if (rev) deq.push_front(s[i]);
            else deq.push_back(s[i]);
        }
    }
    string t = "";
    while(!deq.empty()) {
        t.push_back(deq.front());
        deq.pop_front();
    }
    string ans = "";
    for (int i = t.length() - 1; i >= 0; i--) {
        ans += t[i];
        if (ans[ans.length() - 1] == ans[ans.length() - 2]) ans.pop_back(), ans.pop_back();
    }
    if (!rev) reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
