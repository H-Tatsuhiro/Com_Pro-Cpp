#include <iostream>
using namespace std;
int main() {
    int X, A, B; cin >> X >> A >> B; X -= A;
    printf("%d\n", X % B);
}