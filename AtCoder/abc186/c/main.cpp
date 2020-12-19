#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    long long int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        long long int a = i, b = i;
        bool t = false;
        while (a > 0) {
            if (a % 10 == 7) {
                cnt++;
                t = true;
                break;
            }
            a /= 10;
        }
        if (t) continue;
        while (b > 0) {
            if (b % 8 == 7) {
                cnt++;
                t = true;
                break;
            }
            b /= 8;
        }
        if (t) continue;
    }
    cout << n - cnt << endl;
}
