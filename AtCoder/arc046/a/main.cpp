#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> S = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    vector<string> ans;
    for (int i = 1; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            ans.push_back(S[j]);
            S[j] += S[j][0];
        }
    }
    cout << ans[n - 1] << endl;
}
