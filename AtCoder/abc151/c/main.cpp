#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M; cin >> N >> M;
    int AC = 0, PN = 0;
    vector<pair<int, string>> P(M);
    vector<int> V(N, 0);
    vector<bool> AC_flag(N, false);
    vector<bool> flag(N, false);
    for (int i = 0; i < M; ++i) {
        int a;
        string s;
        cin >> a >> s;
        cin.clear();
        cin.ignore(1024, '\n');
        if (s == "AC") AC_flag[a - 1] = true;
        P[i].first = a;
        P[i].second = s;
    }
    for (int i = 0; i < M; ++i) {
        if (flag[P[i].first - 1] == false && AC_flag[P[i].first - 1] == true) {
            if (P[i].second == "WA") PN++;
            else if (P[i].second == "AC") {
                AC++;
                flag[P[i].first - 1] = true;
            }
        }
    }
    cout << AC << " " << PN << endl;
}