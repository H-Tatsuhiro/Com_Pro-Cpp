#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    char p, q; cin >> p >> q;
    vector<pair<char, int>> v;
    v.push_back(make_pair('A', 0));
    v.push_back(make_pair('B', 3));
    v.push_back(make_pair('C', 4));
    v.push_back(make_pair('D', 8));
    v.push_back(make_pair('E', 9));
    v.push_back(make_pair('F', 14));
    v.push_back(make_pair('G', 23));
    int x = -1, y = -1;
    for (int i = 0; i < v.size(); i++) {
        if (p == v[i].first) x = v[i].second;
        if (q == v[i].first) y = v[i].second;
    }
    cout << abs(x - y) << endl;
}


