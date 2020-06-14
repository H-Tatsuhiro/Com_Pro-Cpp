#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) cin >> A[i];
    vector<int> count(1000007, 0);
    for (int x : A) {
        if (count[x] != 0) {
            count[x] = 2;
            continue;
        }
        for (int i = x; i <= 1000007; i += x) count[i]++;
    }
    long long int cnt = 0;
    for (int tmp : A) {
        if (count[tmp] == 1) cnt++;
    }
    printf("%d\n", cnt);
}
