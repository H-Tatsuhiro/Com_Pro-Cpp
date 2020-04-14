#include <bits/stdc++.h>
using namespace std;
int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int answer = 0;
    sort(A.begin(), A.end());
    answer = A[N - 1] - A[0];
    cout << answer << endl;
}