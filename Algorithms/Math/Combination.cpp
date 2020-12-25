//
// Created by Tatsuhiro Hashimoto on 2020/12/25.
//

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

cpp_int Combination(int n, int r) {
    cpp_int u = 1, d = 1;
    for (int i = 2; i <= n; i++) {
        u *= i;
        if (i <= n - r) d *= i;
    }
    for (int i = 2; i <= r; i++) d *= i;
    return u / d;
}
