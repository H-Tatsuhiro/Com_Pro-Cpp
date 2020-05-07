//
// Created by Tatsuhiro Hashimoto on 2020/05/07.
//
#include <iostream>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;
    int N = A.length();
    int M = B.length();
    if (N > M) cout << A << endl;
    else cout << B << endl;
}
