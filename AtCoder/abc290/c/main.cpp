#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    set<int> S;
    int a;
    for (int i = 0; i < n; i++) cin >> a, S.insert(a);
    for (int i = 0; i < k; i++) {
        if (S.find(i) == S.end()) {
            cout << i << endl;
            return 0;
        }
    }
    cout << k << endl;
}


