#include <iostream>
using namespace std;
int main() {
    char x; cin >> x;
    if ('A' <= x && x <= 'Z') printf("%c\n", 'A');
    else printf("%c\n", 'a');
}