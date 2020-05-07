//
// Created by Tatsuhiro Hashimoto on 2020/05/06.
//
#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    if (A % B == 0) cout << 0 << endl;
    else cout << B - (A % B) << endl;
}
