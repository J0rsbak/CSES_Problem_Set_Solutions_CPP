#include <bits/stdc++.h>

int main() {
  int n, m;
  std::cin >> n >> m;

  std::multiset<int> h;
  for (int i = 0; i < n; i++) {
    int price;
    std::cin >> price;
    h.insert(price);
  }

  for (int i = 0; i < m; i++) {
    int t;
    std::cin >> t;

    auto it = h.upper_bound(t);
    if (it == h.begin()) {
      std::cout << -1 << '\n';
    } else {
      --it;
      std::cout << *it << '\n';
      h.erase(it);
    }
  }

  return 0;
}
