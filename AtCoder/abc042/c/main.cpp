#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, k, d; cin >> n >> k;
    set<int> s;
    for (int i = 0; i < k; i++) cin >> d, s.insert(d);
    for (int i = n; ; i++) {
        int m = i;
        bool t = false;
        while (m > 0 && !t) {
            int e = m % 10;
            m /= 10;
            if (s.count(e)) t = true;
        }
        if (!t) {
            cout << i << endl;
            break;
        }
    }
}
