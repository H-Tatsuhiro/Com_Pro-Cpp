#include <iostream>
using namespace std;
int main() {
    string S; cin >> S;
    int cnt = 0;
    for (int i = 0; i < 3; i++) if (S[i] == '1') cnt++;
    printf("%d\n", cnt);
}