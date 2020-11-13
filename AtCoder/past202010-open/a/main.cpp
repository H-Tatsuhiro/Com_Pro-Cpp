#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<pair<int, char>> v(3);
    for (int i = 0; i < 3; i++) {
        char a = 'A', b = 'B', c = 'C';
        int m; cin >> m;
        if (i == 0) v[i].first = m, v[i].second = a;
        else if (i == 1) v[i].first = m, v[i].second = b;
        else v[i].first = m, v[i].second = c;
    }
    sort(v.begin(), v.end());
    cout << v[1].second << endl;
}
