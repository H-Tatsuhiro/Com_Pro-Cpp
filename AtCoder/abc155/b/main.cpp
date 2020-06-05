#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> A(N);
    bool T = true;
    for (int i = 0; i < N; ++i) {
        int a = 0;
        cin >> a;
        if (a % 2 == 0) {
            if (a % 3 == 0 || a % 5 == 0) {
                continue;
            }
            else {
                T = false;
                break;
            }
        }
    }
    if (T) printf("%s\n", "APPROVED");
    else printf("%s\n", "DENIED");
}
