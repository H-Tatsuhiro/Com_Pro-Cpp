#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<string> S(N, "");
    int MX = 0;
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    string str = ""; int cnt = 0;
    vector<pair<string, int>> ans;
    for (int i = 0; i < N; ++i) {

        if (str != S[i]) {
            if (str != "") ans.push_back(make_pair(str, cnt));
            MX = max(MX, cnt);
            str = S[i];
            cnt = 1;
        }
        else cnt++;
    }
    ans.push_back(make_pair(str, cnt));
    MX = max(MX, cnt);
    for (int k = 0; k < ans.size(); ++k) {
        if (ans[k].second == MX)
            cout << ans[k].first << endl;
    }
}