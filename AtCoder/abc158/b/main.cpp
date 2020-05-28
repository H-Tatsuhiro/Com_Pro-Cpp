#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int N, A, B;
    cin >> N >> A >> B;
    long long int ans = 0;
    ans +=  (N / (A + B)) * A;
    long long int R = N % (A + B);
    ans += min(R, A);
    cout << ans << endl;
}
