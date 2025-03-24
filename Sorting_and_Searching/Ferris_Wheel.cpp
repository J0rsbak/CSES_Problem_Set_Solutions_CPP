#include <bits/stdc++.h>

int main() {
  int n, k;
  std::cin >> n >> k;
  int p[n];
  for (int i = 0; i < n; i++) {
    std::cin >> p[i];
  }
  std::sort(p, p + n);
  int l = 0;
  int r = n - 1;
  int sol{0};
  while (l <= r) {
    if (p[l] + p[r] <= k) {
      sol++;
      l++;
      r--;
      continue;
    }
    sol++;
    r--;
  }
  std::cout << sol;
  return 0;
}
