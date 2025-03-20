#include <bits/stdc++.h>

long long solve(long long i) {
  return (i * i * (i * i - 1)) / 2 - (4 * (i - 1) * (i - 2));
}

int main() {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    std::cout << solve(i) << '\n';
  }
}
