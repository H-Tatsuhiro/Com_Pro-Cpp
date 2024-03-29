//
// Created by Tatsuhiro Hashimoto on 2020/05/30.
//
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000000;
int N, L[MAX_N];

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
    }
    long long int ans = 0;
    while (N > 1) {
        int mil1 = 0, mil2  = 1;
        if (L[mil1] > L[mil2]) swap(mil1, mil2);

        for (int i = 2; i < N; ++i) {
            if (L[i] < L[mil1]) {
                mil2 = mil1;
                mil1 = i;
            }
            else if (L[i] < L[mil2]) {
                mil2 = i;
            }
        }

        int t = L[mil1] + L[mil2];
        ans += t;

        if (mil1 == N - 1) swap(mil1, mil2);
        L[mil1] = t;
        L[mil2] = L[N - 1];
        N--;
    }
    printf("%d\n", ans);
}