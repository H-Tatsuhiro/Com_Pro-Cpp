#include <iostream>
using namespace std;
int main() {
    string S; cin >> S; int cnt = 0;
    for (char c : S) if (c == '1') cnt++;
    printf("%d\n", cnt);
}