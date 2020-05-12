#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    set<int> ans;
    for (int i = 0; i < N; ++i) {
        while(A[i] % 2 == 0) {
            A[i] /= 2;
        }
        ans.insert(A[i]);
    }
    cout << ans.size() << endl;
}
