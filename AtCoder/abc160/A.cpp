#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    bool answer = false;
    if (S[2] == S[3] && S[4] == S[5]) {
        answer = true;
    }
    if (answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
}