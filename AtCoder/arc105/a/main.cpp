#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> v(4, 0);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    long long int sum = v[0] + v[1] + v[2] + v[3];
    for (int i = 0; i < 4; i++) {
        if (v[i] == sum - v[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (v[i] + v[j] == sum - v[i] - v[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            for (int k = j + 1; k < 4; k++) {
                if (v[i] + v[j] + v[k] == sum - v[i] - v[j] - v[k]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
