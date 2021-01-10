#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(pow(2, n) + 1);
    for (int i = 1; i <= pow(2, n); i++) {
        cin >> a[i].first; a[i].second = i;
    }
    vector<pair<int, int>> next(1, make_pair(-1, -1));
    while (n > 1) {
        for (int i = 1; i <= pow(2, n); i += 2) {
            if (a[i].first > a[i + 1].first) next.push_back(a[i]);
            else next.push_back(a[i + 1]);
        }
        a = next;
        next.resize(1, make_pair(-1, -1));
        n--;
    }
    sort(a.begin(), a.end());
    cout << a[1].second << endl;
}
