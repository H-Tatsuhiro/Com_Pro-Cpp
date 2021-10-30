#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<int> parent(n + 1, -1), child(n + 1, -1);
    for (int j = 0; j < q; j++) {
        int t; cin >> t;
        if (t == 1) {
            int x, y; cin >> x >> y;
            child[x] = y, parent[y] = x;
        }
        else if (t == 2) {
            int x, y; cin >> x >> y;
            parent[y] = -1, child[x] = -1;
        }
        else {
            int x; cin >> x;
            int k = -1;
            while(true) {
                if (parent[x] == -1) {
                    k = x;
                    break;
                }
                else x = parent[x];
            }
            vector<int> ans;
            while(true) {
                ans.push_back(k);
                if (child[k] == -1) break;
                else k = child[k];
            }
            cout << ans.size() << " ";
            for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
        }
    }
}
