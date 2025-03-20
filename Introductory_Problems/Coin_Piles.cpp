#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    long long a, b;
    std::cin >> a >> b;
    if ((2 * a - b) % 3 || (2 * a - b) < 0 || (2 * b - a) % 3 ||
        (2 * b - a) < 0) {
      std::cout << "NO\n";
    } else {
      std::cout << "YES\n";
    }
  }
}
