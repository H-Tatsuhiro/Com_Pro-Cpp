//
// Created by Tatsuhiro Hashimoto on 2020/04/21.
//
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 10000000;

bool used[MAX_N];
int perm[MAX_N];

void permutation1(int pos, int n) {
    if (pos == n) {

        return ;
    }
    for (int i = 0; i < n; ++i) {
        if (!used[i]) {
            perm[pos] = i;
            used[i] = true;
            permutation1(pos + 1, n);
            used[i] = false;
        }
    }
    return ;
}

int perm2[MAX_N];

void permutation2(int n) {
    for (int i = 0; i < n; ++i) {
        perm2[i] = i;
    }
    do {

    } while (next_permutation(perm2, perm2 + n));
    return ;
}
