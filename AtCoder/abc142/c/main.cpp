#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> ans(N, 0);
    for (int i = 0; i < N; ++i) {
        int a = 0; cin >> a;
        ans[a - 1] = i + 1;
    }
    for (int i = 0; i < N; ++i) printf("%d ", ans[i]);
    printf("\n");
}
