//
// Created by Tatsuhiro Hashimoto on 2020/04/21.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(const  vector<int>& v) {
    for_each(v.begin(), v.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;
}


const int MAX_N = 100;

bool used[MAX_N];
int  perm[MAX_N];

void permutation1(int pos, int n) {
    if (pos == n) {
        for (int j = 0; j < n; ++j) {
            cout << perm[j] << " ";
        }
        cout << endl;
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

void permutation2(vector<int> perm2) {
    do {
        //print(perm2);
    } while (next_permutation(perm2.begin(), perm2.end()));
    return ;
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    permutation1(0, 4);
    permutation2(v);
}