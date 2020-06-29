#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string S; cin >> S;
    if (S[S.length() - 1] == 'T') printf("%s\n", "YES");
    else printf("%s\n", "NO");
}
