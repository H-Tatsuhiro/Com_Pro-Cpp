#include <bits/stdc++.h>
using namespace std;
int main() {
    int X;
    cin >> X;
    int happy = 0;
    int first = (X / 500) * 1000;
    X %= 500;
    int second = (X / 5) * 5;
    happy = first + second;
    cout << happy << endl;
}