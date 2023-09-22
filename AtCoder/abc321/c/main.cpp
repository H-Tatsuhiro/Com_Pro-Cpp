#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int k; cin >> k;
    vector<long long int> v;
    for (int bit = 2; bit < (1 << 10); bit++) {
        long long int x = 0;
        for (int i = 9; i >= 0; i--) if (bit & (1 << i)) x *= 10, x += i;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[k - 1] << endl;
}


