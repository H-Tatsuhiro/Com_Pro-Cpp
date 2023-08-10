#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = true;
    pair<int, int> p = make_pair(-1, -1);
    pair<int, int> q = make_pair(-1, -1);
    int o = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'B') (p.first != -1 ? p.second : p.first) = i;
        if (s[i] == 'R') (q.first != -1 ? q.second : q.first) = i;
        if (s[i] == 'K') o = i;
    }
    if (p.first % 2 == p.second % 2) t = false;
    if (!(q.first < o && o < q.second)) t = false;
    cout << (t ? "Yes" : "No") << endl;
}


