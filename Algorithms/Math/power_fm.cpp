//
// Created by Tatsuhiro Hashimoto on 2021/01/11.
//

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

cpp_int power_fm(cpp_int a, cpp_int n, cpp_int m) {
    cpp_int ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * a % m;
        a = a * a % m;
        n >>= 1;
    }
    return ret;
}

