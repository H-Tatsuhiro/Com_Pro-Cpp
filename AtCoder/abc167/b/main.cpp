#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    int sum = 0;
    if (A >= K) {
        cout << K << endl;
        return 0;
    }
    else {
        sum += A;
        K -= A;
        if (B >= K) {
            cout << sum << endl;
            return 0;
        }
        else {
            K -= B;
            sum -= K;
            cout << sum << endl;
            return 0;
        }
    }
}
