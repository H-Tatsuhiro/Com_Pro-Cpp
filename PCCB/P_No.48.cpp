//
// Created by Tatsuhiro Hashimoto on 2020/05/27.
//
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int N, R;
const int MAX_N = 100000;
int X[MAX_N +  1];

int main() {
    cin >> N >> R;
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }
    sort(X, X + N);
    int i = 0, ans = 0;
    while (i < N) {
        int s = X[i++];
        while (i < N && X[i] <= s + R) i++;
        int p = X[i - 1];
        while (i < N && X[i] <= p + R) i++;
        ans++;
    }
    printf("%d\n", ans);
}