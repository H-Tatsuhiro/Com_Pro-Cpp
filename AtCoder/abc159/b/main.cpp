#include <bits/stdc++.h>
using namespace std;
int main() {
    string S; cin >> S;
    int N = S.length();
    string s_1 = S.substr(0, (N - 1) / 2), s_2 = S.substr(((N + 3)/ 2) - 1);
    string T(S.rbegin(), S.rend()), s1_t(s_1.rbegin(), s_1.rend()), s2_t(s_2.rbegin(), s_2.rend());
    if (S == T && s_1 == s1_t && s_2 == s2_t) printf("%s\n", "Yes");
    else printf("%s\n", "No");
}
