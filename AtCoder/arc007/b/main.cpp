#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> cd(n, 0);
    for (int i = 0; i < n; i++) cd[i] = i + 1;
    int bef = 0;
    for (int i = 0; i < m; i++) {
        int now; cin >> now;
        for (int j = 0; j < n; j++) {
            if (now == cd[j]) {
                cd[j] = bef;
                break;
            }
        }
        bef = now;
    }
    for (int i = 0; i < n; i++) cout << cd[i] << endl;
}
