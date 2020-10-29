#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    int cnt = 1;
    n--;
    while (cnt < k) {
         n -= 2;
         if (n >= 1) cnt++;
         else {
             cout << "NO" << endl;
             return 0;
         }
    }
    cout << "YES" << endl;
    return 0;
}
