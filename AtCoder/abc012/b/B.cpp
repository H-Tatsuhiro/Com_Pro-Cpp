//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
//
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int H = N / 3600;
    N %= 3600;
    int M = N / 60;
    N %= 60;
    int S = N;
    string ans;
    if (H < 10) {
        ans += '0';
        ans += H + 48;
    }
    else {
        ans += (H / 10 + 48);
        ans += (H % 10 + 48);
    }
    ans += ':';
    if (M < 10) {
        ans += '0';
        ans += M + 48;
    }
    else {
        ans += (M / 10 + 48);
        ans += (M % 10 + 48);
    }
    ans += ':';
    if (S < 10) {
        ans += '0';
        ans += S + 48;
    }
    else {
        ans += (S / 10 + 48);
        ans += (S % 10 + 48);
    }
    cout << ans << endl;
}