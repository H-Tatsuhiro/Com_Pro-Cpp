//
// Created by Tatsuhiro Hashimoto on 2021/01/11.
//

template<class T> T power_fm(T a, T n, T m) {
    T ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * a % m;
        a = a * a % m;
        n >>= 1;
    }
    return ret;
}

