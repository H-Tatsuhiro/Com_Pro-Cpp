//
// Created by Tatsuhiro Hashimoto on 2020/12/25.
//

template<class T> T Combination(T n, T r) {
    T u = 1, d = 1;
    for (int i = 2; i <= n; i++) {
        u *= i;
        if (i <= n - r) d *= i;
    }
    for (int i = 2; i <= r; i++) d *= i;
    return u / d;
}
