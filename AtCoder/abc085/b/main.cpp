#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    set<int> S;
    for (int i = 0; i < N; ++i) {
        int a; cin >> a; S.insert(a);
    }
    printf("%d\n", S.size());
}
