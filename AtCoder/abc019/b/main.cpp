#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S;
    cin >> S;
    string T;
    int N = S.length();
    int cnt = 1;
    for (int i = 0; i < N; ++i) {
        char c = S[i];
        if (S[i + 1] != c) {
            string num = to_string(cnt);
            T += c + num;
            cnt = 1;
        }
        else cnt++;
    }
    cout << T << endl;
}
