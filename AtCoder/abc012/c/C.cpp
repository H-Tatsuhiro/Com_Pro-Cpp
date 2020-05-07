//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
//
#include <iostream>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    int N_alt = 2025 - N;
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 10; ++j) {
            if (i * j == N_alt) cout << i  << " x " << j << endl;
        }
    }
}
