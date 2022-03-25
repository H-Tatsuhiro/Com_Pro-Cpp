#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    vector<char> c = {'A', 'B', 'X', 'Y'};
    vector<string> v;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            string t = "";
            t.push_back(c[i]), t.push_back(c[j]), v.push_back(t);
        }
    }
    int ans = n;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (i == j) continue;
            int tmp = 0;
            for (int k = 0; k < n; k++) {
                if (k < n - 1) {
                    string q = "";
                    q.push_back(s[k]), q.push_back(s[k + 1]);
                    if (q == v[i] || q == v[j]) tmp++, k++;
                    else tmp++;
                }
                else tmp++;
            }
            ans = min(ans, tmp), tmp = 0;
            for (int k = n - 1; k >= 0; k--) {
                if (k > 0) {
                    string q = "";
                    q.push_back(s[k - 1]), q.push_back(s[k]);
                    if (q == v[i] || q == v[j]) tmp++, k--;
                    else tmp++;
                }
                else tmp++;
            }
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
}
