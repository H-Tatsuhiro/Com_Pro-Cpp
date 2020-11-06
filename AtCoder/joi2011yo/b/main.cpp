#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int n, cnt = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        str += str;
        for (int j = 0; j < 10; j++) {
            string t = str.substr(j, s.length());
            if (t == s) {
                cnt++; break;
            }
        }
    }
    cout << cnt << endl;
}
