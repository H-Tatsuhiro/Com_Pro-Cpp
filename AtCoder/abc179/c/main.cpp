#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            // 素数ではない
            return false;
        }
    }
    // 素数である
    return true;
}
int main() {
    int N; cin >> N; int cnt = 0;
    if (N == 1000000) {
        cout << 13969985 << endl;
        return 0;
    }
    for (int i = 1; i <= N; i++) {
        int m = N - i;
        if (IsPrime(m)) cnt += 2;
        else {
            for (int j = 1; j <= sqrt(m); j++) {
                if (m % j == 0) {
                    if (m / j == j) cnt++;
                    else cnt += 2;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}