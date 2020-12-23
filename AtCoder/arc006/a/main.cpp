#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<int, bool> Map_e;
    vector<int> l(6, 0);
    for (int i = 0; i < 6; i++) {
        int e; cin >> e; Map_e[e] = true;
    }
    int b; cin >> b;
    for (int i = 0; i < 6; i++) cin >> l[i];
    int cnt = 0;
    for (int i = 0; i < 6; i++) if (Map_e[l[i]] == true) cnt++;
    vector<int> ans = {0, 0, 0, 5, 4, 3, 1};
    if (cnt == 5) {
        for (int i = 0; i < 6; i++) if (Map_e[l[i]] == false && l[i] == b) ans[cnt] = 2;
        cout << ans[cnt] << endl;
    }
    else cout << ans[cnt] << endl;
}
