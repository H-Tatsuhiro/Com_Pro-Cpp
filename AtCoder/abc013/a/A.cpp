//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    char X;
    cin >> X;
    vector<char> v = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; ++i) {
        if (X == v[i]) cout << i + 1 << endl;
    }
}
