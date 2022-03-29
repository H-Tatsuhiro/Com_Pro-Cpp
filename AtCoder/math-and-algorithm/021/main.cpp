#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T, class U> long long int comb(T n, U r){
    if (n == r || r == 0) return 1LL;
    if (n < r || n == 0) return 0LL;
    long long int x = 1, y = 1;
    for (int i = n; i > n - r; i--) x *= i;
    for (int j = r; j >= 2; j--) y *= j;
    return (x / y);
}
int main() {
    int n, r; cin >> n >> r;
    cout << comb(n, r) << endl;
}
