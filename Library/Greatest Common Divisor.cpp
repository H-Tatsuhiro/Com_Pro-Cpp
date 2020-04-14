unsigned long long gcd(unsigned long long a, unsigned long long b) {
  if(a < b) {
    return gcd(b, a);
  }
  unsigned long long r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}