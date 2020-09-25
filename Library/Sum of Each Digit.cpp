int sed(int N) {
    string s = to_string(N);
    int r = 0;
    for (int i = 0; i < s.length(); i++) r += (int)(s[i] - 48);
    return r;
}