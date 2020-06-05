#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
    int N, K; cin >> N >> K;
    vector<int> H(N, 0);
    for (int i = 0; i < N; ++i) cin >> H[i];
    sort(H.begin(), H.end(), greater<int>());
    unsigned long long int cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (K > 0) K--;
        else cnt += H[i];
    }
    cout << cnt << endl;
}
