#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<pair<int, char>> a;
    a.push_back(make_pair(0, 'a'));
    a.push_back(make_pair(0, 'b'));
    a.push_back(make_pair(0, 'c'));
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') a[0].first++;
        else if (s[i] == 'b') a[1].first++;
        else a[2].first++;
    }
    sort(a.begin(), a.end());
    cout << a[2].second << endl;
}
