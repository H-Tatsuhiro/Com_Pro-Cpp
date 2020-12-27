#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int a, b, s, t; cin >> a >> b >> s >> t;
        long long int sum = 0;
        if (s >= a && t <= b) sum += 0;\
        else if ((a < s && b <= s) || (t <= a && t < b))sum += abs(s - t) * 100;
        else if (s >= a && t > b) sum += abs(t - b) * 100;
        else if (s < a && t <= b) sum += abs(a - s) * 100;
        else if (s < a && t > b) sum += abs(s - a) * 100 + abs(t - b) * 100;
        cout << sum << endl;
    }
}
