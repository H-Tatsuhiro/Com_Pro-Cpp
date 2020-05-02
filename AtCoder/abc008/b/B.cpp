//
// Created by Tatsuhiro Hashimoto on 2020/04/26.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int N;
    cin >> N;
    vector<string> S(N, " ");
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    vector<pair<int, string>> cnt(N);
    for (int j = 0; j < N; ++j) {
        int count = 0;
        string tmp = S[j];
        cnt[j].second = S[j];
        for (int k = 0; k < N; ++k) {
            if (tmp == S[k]) {
                count++;
            }
        }
        cnt[j].first = count;
    }
    sort(cnt.begin(), cnt.end());
    cout << cnt[N - 1].second << endl;
}