#include <bits/stdc++.h>
typedef long long ll;
int main() {
  size_t t;
  std::cin >> t;
  while (t--) {
    ll y, x, sol;
    std::cin >> y;
    std::cin >> x;
    if (y > x) {
      sol = (y - 1) * (y - 1);
      if (y % 2) {
        sol += x;
      } else {
        sol += 2 * y - x;
      }
    } else {
      sol = (x - 1) * (x - 1);
      if (x % 2) {
        sol += 2 * x - y;
      } else {
        sol += y;
      }
    }
    std::cout << sol << '\n';
  }
  return 0;
}
