//
// Created by Tatsuhiro Hashimoto on 2020/04/26.
//
#include <iostream>
using namespace std;
int main() {
    string S;
    cin >> S;
    if (S[0] == 'a' && S.length() == 1) cout << -1 << endl;
    else cout << 'a' << endl;
}
