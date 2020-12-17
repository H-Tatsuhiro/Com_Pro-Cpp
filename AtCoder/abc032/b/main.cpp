#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    string s; int k; cin >> s >> k;
    set<string> Set;
    for (int i = 0; i < s.length(); i++) if (i + (k - 1) <= s.length() - 1) Set.insert(s.substr(i, k));
    cout << Set.size() << endl;
}
