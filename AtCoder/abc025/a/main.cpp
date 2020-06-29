#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S; int N; cin >> S >> N;
    vector<string> T;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            string str;
            str += S[i]; str += S[j];
            T.push_back(str);
        }
    }
    sort(T.begin(), T.end());
    cout << T[N - 1] << endl;
}
