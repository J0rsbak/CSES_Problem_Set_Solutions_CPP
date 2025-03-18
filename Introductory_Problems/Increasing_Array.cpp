#include <bits/stdc++.h>
int main() {
  size_t n;
  std::cin >> n;
  long long int curr;
  long long int prev;
  long long int sol = 0;
  n--;
  std::cin >> prev;
  while (n--) {
    std::cin >> curr;
    if (curr < prev) {
      sol += prev - curr;
    } else {
      prev = curr;
    }
  }
  std::cout << sol;
  return 0;
}
