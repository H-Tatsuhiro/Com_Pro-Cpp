#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; string S; cin >> N >> S;
    for (int i = 0; i < N; ++i) {
        string T = S.substr(0, i + 1);
        T += T;
        if (S == T) {
            printf("%s\n", "Yes");
            break;
        }
        if (i == N - 1) printf("%s\n", "No");
    }
}
