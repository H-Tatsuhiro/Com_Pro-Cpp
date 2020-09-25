#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int a; cin >> a;
        sum += a;
    }
    cout << N - sum << endl;
}
