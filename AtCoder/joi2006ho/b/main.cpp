#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    for (int i = 0; i < n; i++) {
        char prev = s[0];
        int cnt = 1;
        string t = "";
        for (int j = 1; j < s.length(); j++) {
            if (s[j] != prev) {
                string x = to_string(cnt) + prev;
                t += x;
                cnt = 1;
                prev = s[j];
            }
            else cnt++;
        }
        t += to_string(cnt) + prev;
        s = t;
    }
    cout << s << endl;
}
