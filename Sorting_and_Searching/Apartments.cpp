#include <bits/stdc++.h>

int main() {
  int n, m, k;

  std::cin >> n >> m >> k;
  std::vector<int> arrn(n);
  std::vector<int> arrm(m);
  for (int i = 0; i < n; i++) {
    std::cin >> arrn[i];
  }
  for (int i = 0; i < m; i++) {
    std::cin >> arrm[i];
  }
  sort(arrn.begin(), arrn.end());
  sort(arrm.begin(), arrm.end());
  int l_n = 0;
  int l_m = 0;
  int sol = 0;
  while (l_n < n && l_m < m) {
    if (std::abs(arrm[l_m] - arrn[l_n]) <= k) {
      l_n++;
      l_m++;
      sol++;
      continue;
    }
    if (arrn[l_n] < arrm[l_m]) {
      l_n++;
    } else {
      l_m++;
    }
  }
  std::cout << sol;
}
