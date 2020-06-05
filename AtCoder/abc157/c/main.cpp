#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int ans = -1;
    vector<int> S(M, 0);
    vector<char> C(M, 0);
    for (int i = 0; i < M; ++i) {
        cin >> S[i] >> C[i];
    }
    int maxi = 0, mini = 0;
    if (N == 1) maxi = 9, mini = 0;
    else if (N == 2) maxi = 99, mini = 10;
    else if (N == 3) maxi = 999, mini = 100;
    for (int i = mini; i <= maxi; ++i) {
        string str = to_string(i);
        bool T = true;
        for (int j = 0; j < M; ++j) {
            if (T == true && str[S[j] - 1] == C[j]) T = true;
            else {
                T = false;
                break;
            }
        }
        if (T) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
