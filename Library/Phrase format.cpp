char pf(char x) {
  if (x >= 'a' && x <= 'z') {
    return x;
  }
  if (x >= 'A' && x <= 'Z') {
    return x;
  }
  // a -> A = x - ('a' - 'A');
  // A -> a = x + ('a' - 'A');
}