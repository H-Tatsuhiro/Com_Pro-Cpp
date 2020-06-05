#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int H, A;
    cin >> H >> A;
    int cnt = 0;
    while(H > 0) {
        cnt++;
        H -= A;
    }
    cout << cnt << endl;
}
