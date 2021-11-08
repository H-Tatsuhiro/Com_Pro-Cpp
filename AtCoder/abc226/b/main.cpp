#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        vector<int> c(l, 0);
        for (int j = 0; j < l; j++) cin >> c[j];
        a.push_back(c);
    }
    set<vector<int>> S;
    for (int i = 0; i < n; i++) S.insert(a[i]);
    cout << S.size() << endl;
}
