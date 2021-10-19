#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    vector<pair<int, int>> P;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        pair<int, int> P_p = make_pair(y, x);
        P.push_back(P_p);
    }
    sort(P.begin(), P.end());
    for (int i = 0; i < N; i++) {
        cout << P[i].second << " " << P[i].first << endl;
    }
}
