#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main() {
    int q; cin >> q;
    int n = 1 << 20, m = n - 1;
    map<int, int> interval;
    map<int, long long int> Map;
    interval[n] = 0;
    for (int i = 0; i < q; i++) {
        long long int t, x; cin >> t >> x;
        if (t == 1) {
            int i = x & m;
            auto it = interval.upper_bound(i);
            if (it == interval.end()) i = 0, it = interval.begin();
            if (it->second <= i) {
                Map[i] = x;
                int a = it->second, b = i, c = i + 1, d = it->first;
                interval.erase(it);
                if (a != b) interval[b] = a;
                if (c != d) interval[d] = c;
            }
            else {
                Map[it->second] = x;
                it->second++;
                if (it->first == it->second) interval.erase(it);
            }
        }
        else {
            auto it = Map.find(x & m);
            cout << (it == Map.end() ? -1 : it->second) << endl;
        }
    }
}
