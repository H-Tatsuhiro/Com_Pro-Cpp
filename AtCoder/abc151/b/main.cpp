#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, K, M;
    cin >> N >> K >> M;
    int ans = -1, sum = 0;
    for (int i = 0; i < N - 1; ++i) {
        int a = 0; cin >> a; sum += a;
    }
    for (int i = 0; i <= K; ++i) {
        int score = (sum + i) / N;
        if (score >= M)  {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
