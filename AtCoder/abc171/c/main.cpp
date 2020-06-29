#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    unsigned long long int N; cin >> N;
    string ans = "";
    while (N > 0) {
        N -= 1;
        int tmp = N % 26;
        ans += (char)(tmp + 97);
        N /= 26;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
