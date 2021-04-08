//
// Created by Tatsuhiro Hashimoto on 2021/03/29.
//
#include <iostream>
using namespace std;
template<class T> T gcd(T a, T b) {
    if(a < b) {
        return gcd(b, a);
    }
    T r;
    while ((r=a%b)) {
        a = b;
        b = r;
    }
    return b;
}
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        long long int n, ans = -1; cin >> n;
        for (int j = 0; ; j++) {
            long long int sum = 0, tmp = n + j;
            while(tmp > 0) {
                sum += tmp % 10;
                tmp /= 10;
            }
            if (gcd(n + j, sum) > 1) {
                ans = n + j;
                break;
            }
        }
        cout << ans << endl;
    }
}