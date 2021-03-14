#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long n; cin >> n;
    vector<long long int> a(n);
    for (long i = 0; i < n; i++) cin >> a[i];
    long long int now = 0, cnt = 0;
    for (auto x : a) {
        now += x;
        if (now <= 2018) cnt++;
    }
    cout << cnt << endl;
}
