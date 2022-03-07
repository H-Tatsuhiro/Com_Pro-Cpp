//
// Created by Tatsuhiro Hashimoto on 2020/05/27.
//
#include <iostream>

using namespace std;

int N;
const int MAX_N = 100000;
char S[MAX_N + 1];

int main() {
    int a = 0, b = N - 1;
    while (a <= b) {
        bool left = false;
        for (int i = 0; a + i <= b; ++i) {
            if (S[a + i] < S[b - i]) {
                left = true;
                break;
            }
            else if(S[a + i] > S[b - i]) {
                left = false;
                break;
            }
        }
        if (left) cout << S[a++];
        else cout << S[b--];
    }
    cout << endl;
}
