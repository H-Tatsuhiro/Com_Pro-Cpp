#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n; cin >> n;
    set<pair<string, string>> S;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        pair<string, string> p = make_pair("", "");
        p.first = s;
        reverse(s.begin(), s.end());
        p.second = s;
        if (p.first >= p.second) swap(p.first, p.second);
        S.insert(p);
    }
    cout << S.size() << endl;
}


