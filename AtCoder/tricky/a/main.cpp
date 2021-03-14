#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main() {
    int n; cin >> n;
    long long int d = 0x8000000000000000LL;
    for (int i = 0; i < n; i++) {
        long long int a, b;
        scanf("%lld%lld\n", &a, &b);
        if (b == -1 && a == d) {
            char str[100];
            sprintf(str, "%lld", a);
            printf("%s\n", str + 1);
            continue;
        }
        printf("%lld\n", (a / b));
    }
}
