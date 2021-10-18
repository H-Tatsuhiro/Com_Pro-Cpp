#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    set<char> S;
    for (int i = 0; i < n; i++) S.insert(s[i]);
    if (S.size() >= 3) cout << "Yes" << endl;
    else cout << "No" << endl;
}
