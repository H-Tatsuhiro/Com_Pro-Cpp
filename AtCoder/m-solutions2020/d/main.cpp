#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];
    long long int money = 1000, stock = 0;
    A.push_back(0);
    for (int i = 0; i < N; i++) {
        if (A[i] == A[i + 1]) continue;
        if (A[i] < A[i + 1]) {
            long long int tmp = money / A[i];
            money -= A[i] * tmp;
            stock += tmp;
        }
        else if (A[i] > A[i + 1]){
            money += stock * A[i];
            stock = 0;
        }
    }
    cout << money << endl;
}
