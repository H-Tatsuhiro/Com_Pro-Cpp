#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
const unsigned long long int MAX_ans = 1e+18;
int main() {
    int N;
    cin >> N;
    unsigned long long int ans = 1;
    bool T = false;
    for (int i = 0; i < N; ++i) {
        unsigned long long int input = 0;
        cin >> input;
        if (input == 0) {
            cout << 0 << endl;
            return 0;
        }
        if (T || __int128(ans) * input > MAX_ans) {
            T = true;
        }
        ans *= input;
    }
    if (T) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
