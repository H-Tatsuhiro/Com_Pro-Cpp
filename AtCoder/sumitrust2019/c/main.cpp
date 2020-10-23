#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int x; cin >> x;
    vector<int> cost = {100, 101, 102, 103, 104, 105};

    for (int i = 0; cost[0] * i <= x; i++) {
        int step1 = x - (cost[0] * i);
        for (int j = 0; cost[1] * j <= step1; j++) {
            int step2 = step1 - (cost[1] * j);
            for (int k = 0; cost[2] * k <= step2; k++) {
                int step3 = step2 - (cost[2] * k);
                for (int l = 0; cost[3] * l <= step3; l++) {
                    int step4 = step3 - (cost[3] * l);
                    for (int o = 0; cost[4] * o <= step4; o++) {
                        int step5 = step4 - (cost[4] * o);
                        if (step5 % cost[5] == 0) {
                            cout << 1 << endl;
                            return 0;
                        }
                    }
                }
            }

        }
    }

    cout << 0 << endl;
    return 0;
}
