#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, j = 1, cnt = 0; string S; cin >> N >> S;
    for (int i = 0; i < N; ++i) {
        if (S[i] == S[j]) j++;
        else {
            cnt++; j = i;
        }
    }
    printf("%d\n", cnt);
}
