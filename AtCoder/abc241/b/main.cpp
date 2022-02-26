#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) Map[a[i]]++;
    for (int i = 0; i < m; i++) {
        if (Map[b[i]] > 0) Map[b[i]]--;
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
