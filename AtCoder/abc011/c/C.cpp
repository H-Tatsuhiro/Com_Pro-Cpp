//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
//
#include <iostream>
using namespace std;

int N, a, b, c;

bool solver(int now) {
    if (now == a || now == b || now == c) return false;
    for (int i = 0; i < 100; ++i) {
        if (now - 3 != a && now - 3 != b && now - 3 != c && now - 3 >= 0) {
            now -= 3;
            if (now == 0) return true;
            else continue;
        }
        else if (now - 2 != a && now - 2 != b && now - 2 != c && now - 2 >= 0) {
            now -= 2;
            if (now == 0) return true;
            else continue;
        }
        else if (now - 1 != a && now - 1 != b && now - 1 != c && now - 1 >= 0) {
            now--;
            if (now == 0) return true;
            else continue;
        }
    }
    return false;
}

int main() {
    cin >> N >> a >> b >> c;
    if (solver(N)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
