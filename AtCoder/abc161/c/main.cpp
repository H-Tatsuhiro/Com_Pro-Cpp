#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long N, K;
    cin >> N >> K;
    cout << min(N % K, abs(N % K - K)) << endl;
}
